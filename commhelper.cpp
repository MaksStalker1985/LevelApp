#include "commhelper.h"

CommHelper::CommHelper(QObject *parent) : QObject(parent)
{

}

void CommHelper::sl_init_socket(QString ip_adress)
{
    s_socket = new QTcpSocket(this);
    s_socket->connectToHost(ip_adress,80);
    connect(s_socket,SIGNAL(readyRead()),this,SLOT(read_value_from_socket()));
}

void CommHelper::read_value_from_socket()
{

}
