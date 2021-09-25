#include "dbhelper.h"
#include <QVariant>

DBHelper::DBHelper(QObject *parent) : QObject(parent)
{

}

DBHelper::~DBHelper()
{
    delete [] ptr_dbase;

}

void DBHelper::readDatabase()
{
 QSqlQuery query;
 query.prepare("SELECT VESSEL_NAME, TankQuantities from Config");
 query.exec();
 query.first();
 QString temp1 = query.value(0).toString();
 int temp2 = query.value(1).toInt();


}

void DBHelper::initDatabase()
{
  ptr_dbase = new QSqlDatabase;
  ptr_dbase->addDatabase("QSQLITE");
  ptr_dbase->setDatabaseName("");
}

void DBHelper::input_data(QString data)
{

}
