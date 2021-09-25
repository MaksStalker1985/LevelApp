#include "ballastwidget.h"
#include "ui_ballastwidget.h"

BallastWidget::BallastWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BallastWidget)
{
    ui->setupUi(this);
    connect(this,&BallastWidget::insertItem,&BallastWidget::addUnit);

    gr_lay->setSpacing(1);
    gr_lay->setVerticalSpacing(1);
    gr_lay->setHorizontalSpacing(1);
    gr_lay->setSizeConstraint(QLayout::SetMinAndMaxSize);

}

BallastWidget::~BallastWidget()
{

    delete ui;
}

void BallastWidget::addUnit(QWidget *ptr_wdg, int position_x, int position_y)
{
    gr_lay->addWidget(ptr_wdg,position_x,position_y,Qt::AlignCenter);
}
