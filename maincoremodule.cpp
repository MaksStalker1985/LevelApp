#include "maincoremodule.h"
#include <QTextStream>
MainCoreModule::MainCoreModule(QObject *parent) : QObject(parent)
{

}

void MainCoreModule::set_configuration(QString data)
{

}


void MainCoreModule::init_units()
{
    p_unit = new Unit[I_UNITS_QUANTITY];
    ptr_data_units = new QStringList[I_UNITS_QUANTITY];
    for(int i = 0;i<I_UNITS_QUANTITY;i++){

    }
}


