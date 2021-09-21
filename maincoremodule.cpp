#include "maincoremodule.h"

MainCoreModule::MainCoreModule(QObject *parent) : QObject(parent)
{

}

void MainCoreModule::set_configuration(QString data)
{

}

void MainCoreModule::read_config_file()
{

}

void MainCoreModule::write_config(QString data)
{

}

void MainCoreModule::init_units()
{
    p_unit = new Unit[I_UNITS_QUANTITY];
    for(int i = 0;i<I_UNITS_QUANTITY;i++){
        p_unit[i];
    }
}
