#include "fuelsmallunit.h"
#include "ui_fuelsmallunit.h"

FuelSmallUnit::FuelSmallUnit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FuelSmallUnit)
{
    ui->setupUi(this);
}

FuelSmallUnit::~FuelSmallUnit()
{
    delete ui;
}
