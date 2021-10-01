#include "ballastwidget.h"
#include "ui_ballastwidget.h"

BallastWidget::BallastWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BallastWidget)
{
    ui->setupUi(this);
    connect(this,&BallastWidget::insertItem,&BallastWidget::addUnit);

}

BallastWidget::~BallastWidget()
{

    delete ui;
}

void BallastWidget::addUnit(QWidget *ptr_wdg, int position_x, int position_y, int type)
{
    switch (type) {
    case afterPeak:{
        ui->aptLayout->addWidget(ptr_wdg,0,Qt::AlignCenter);
        break;
    }
    case usual:{
         ui->gridLayout->addWidget(ptr_wdg,position_x,position_y,Qt::AlignCenter);
         break;
    }
    case forpeak:{
        ui->fptLayout->addWidget(ptr_wdg,0,Qt::AlignCenter);
        break;
    }
    }

}
