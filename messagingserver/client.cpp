#include "client.h"

#include <QTcpSocket>
#include <QDebug>

#include "server.h"

Client::Client(QTcpSocket *socket, Server *server) :
    QObject(server), m_socket(socket)
{
    qDebug() << this << "connected";

    m_socket->setParent(this);

    connect(m_socket, &QIODevice::readyRead, this, &Client::readyRead);
    connect(m_socket, &QAbstractSocket::disconnected, this, &QObject::deleteLater);
}

Client::~Client()
{
    qDebug() << this << "disconnected";
}

qint64 Client::write(const char *data, qint64 len)
{
    return m_socket->write(data, len);
}

qint64 Client::write(const char *data)
{
    return m_socket->write(data);
}

qint64 Client::write(const QByteArray &data)
{
    return m_socket->write(data);
}

void Client::readyRead()
{
    qDebug() << this << "readyRead" << m_socket->readAll();
}
