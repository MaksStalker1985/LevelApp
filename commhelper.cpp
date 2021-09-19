#include "commhelper.h"

CommHelper::CommHelper(QObject *parent) : QObject(parent)
{

}

void CommHelper::sl_init_socket(QString ip_adress)
{
    s_socket = new QTcpSocket;
    s_socket->connectToHost(ip_adress,80);
    connect(s_socket,SIGNAL(readyRead()),this,SLOT(read_value_from_socket()));
}

void CommHelper::sl_init_port(QString PORTNAME)
{

}

void CommHelper::sl_close_socket()
{

}

void CommHelper::sl_close_port()
{

}

void CommHelper::sl_send_data_to_port(QString data)
{

}

void CommHelper::sl_send_data_to_socket(QString data)
{

}

void CommHelper::read_value_from_socket()
{
    QByteArray ba_data = s_socket->readAll();
    emit sig_transmit_socket_data(ba_data);
}

void CommHelper::read_value_from_port()
{

}
