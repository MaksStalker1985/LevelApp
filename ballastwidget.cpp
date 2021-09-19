#include "ballastwidget.h"
#include "ui_ballastwidget.h"
#include <QGridLayout>
BallastWidget::BallastWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BallastWidget)
{
    ui->setupUi(this);
    QGridLayout *gr_lay = new QGridLayout;
    gr_lay->setSpacing(1);
    gr_lay->setVerticalSpacing(1);
    gr_lay->setHorizontalSpacing(1);
    gr_lay->setSizeConstraint(QLayout::SetMinAndMaxSize);


    for (int i= 0; i<16;i++){
        int z = i+1;
        int y = 0;
        if(i>=7){
            y = 2;
            z=i-6;
        }
        if(i>=14){
            y = 1;
            z = i-14;
            if(i == 15){
            z = i+1;
            }
        }
        gr_lay->addWidget(&bwsm[i],y,z,Qt::AlignCenter);
    }
     this->setLayout(gr_lay);
    this->updateGeometry();

}

BallastWidget::~BallastWidget()
{
    delete[] bwsm;
    delete ui;
}
