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

void FuelSmallUnit::on_remoteCheckBox_stateChanged(int arg1)
{
    if(ui->remoteCheckBox->isChecked()){

    }else{

    }
}

void FuelSmallUnit::SetActive(bool status)
{
    if(status == true){
        ui->typeChooseBox->setCurrentIndex(0);
        ui->typeChooseBox->setEnabled(false);
        ui->valueInput->setEnabled(false);
    }else{
        ui->typeChooseBox->setEnabled(true);
        ui->valueInput->setEnabled(true);
    }
}

