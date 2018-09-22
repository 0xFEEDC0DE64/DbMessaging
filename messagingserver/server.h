#pragma once

#include <QObject>
#include <QSet>

class QTcpServer;

class Client;

class Server : public QObject
{
    Q_OBJECT

public:
    explicit Server(QObject *parent = nullptr);

Q_SIGNALS:
    void distribute(const QByteArray &data);

protected:
    void timerEvent(QTimerEvent *event) Q_DECL_OVERRIDE;

private Q_SLOTS:
    void newConnection();

private:
    QTcpServer *m_server;
    QSet<Client*> m_clients;
    int m_timerId;
};
