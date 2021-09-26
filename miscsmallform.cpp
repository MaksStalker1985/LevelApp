#include "miscsmallform.h"
#include "ui_miscsmallform.h"

MiscSmallForm::MiscSmallForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MiscSmallForm)
{
    ui->setupUi(this);
}

MiscSmallForm::~MiscSmallForm()
{
    delete ui;
}
