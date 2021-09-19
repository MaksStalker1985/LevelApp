#include "ballastsmallunit.h"
#include "ui_ballastsmallunit.h"

BallastSmallUnit::BallastSmallUnit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BallastSmallUnit)
{
    ui->setupUi(this);
}

BallastSmallUnit::~BallastSmallUnit()
{
    delete ui;
}
