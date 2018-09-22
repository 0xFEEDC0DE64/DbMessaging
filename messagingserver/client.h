#pragma once

#include <QObject>

class QTcpSocket;

class Server;

class Client : public QObject
{
    Q_OBJECT

public:
    explicit Client(QTcpSocket *socket, Server *server);
    ~Client();

    qint64 write(const char *data, qint64 len);
    qint64 write(const char *data);
    qint64 write(const QByteArray &data);

private Q_SLOTS:
    void readyRead();

private:
    QTcpSocket *m_socket;
};
