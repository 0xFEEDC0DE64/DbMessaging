#include "server.h"

#include <QTcpServer>
#include <QDateTime>
#include <QTimerEvent>

#include <stdexcept>

#include "client.h"

Server::Server(QObject *parent) :
    QObject(parent),
    m_server(new QTcpServer(this))
{
    if(!m_server->listen(QHostAddress::Any, 1234))
        throw std::runtime_error(QStringLiteral("could not start listening %0").arg(m_server->errorString()).toStdString());

    connect(m_server, &QTcpServer::newConnection, this, &Server::newConnection);

    m_timerId = startTimer(1000);
}

void Server::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == m_timerId)
        Q_EMIT distribute(QDateTime::currentDateTime().toString("dd.MM.yyyy HH:mm:ss\r\n").toUtf8());
    else
        QObject::timerEvent(event);
}

void Server::newConnection()
{
    auto socket = m_server->nextPendingConnection();
    if(!socket)
    {
        qWarning() << "null socket received";
        return;
    }

    auto client = new Client(socket, this);
    connect(this, &Server::distribute, client, qOverload<const QByteArray &>(&Client::write));
    m_clients.insert(client);
    connect(client, &QObject::destroyed, this, [this, client](){
        m_clients.remove(client);
    });
}
