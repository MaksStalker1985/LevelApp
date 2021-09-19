#ifndef COMMHELPER_H
#define COMMHELPER_H

#include <QObject>
#include <QtSerialPort/QtSerialPort>
#include <QtNetwork/QTcpSocket>

class CommHelper : public QObject
{
    Q_OBJECT
public:
    explicit CommHelper(QObject *parent = nullptr);

signals:
    void sig_transmit_socket_data(QByteArray);
    void sig_transmit_port_data(QByteArray);
    void sig_send_data_to_port(QString);
    void sig_send_data_to_socket(QString);

private:
    QTcpSocket *s_socket;
    QSerialPort *s_port;

private slots:
    void sl_init_socket(QString ip_adress);
    void sl_init_port(QString PORTNAME);
    void sl_close_socket();
    void sl_close_port();
    void sl_send_data_to_port(QString data);
    void sl_send_data_to_socket(QString data);
    void read_value_from_socket();
    void read_value_from_port();
};

#endif // COMMHELPER_H
