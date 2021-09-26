#include "dbhelper.h"
#include <QVariant>

DBHelper::DBHelper(QObject *parent) : QObject(parent)
{

}

DBHelper::~DBHelper()
{
    delete [] ptr_dbase;

}

double DBHelper::d_fill_table(int row, int column, QString table_name)
{

}

void DBHelper::readDatabase()
{
 QSqlQuery query;
 query.prepare("SELECT VESSEL_NAME, TankQuantities from Config");
 query.exec();
 query.first();



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
