#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->removeTab(1);
    ui->tabWidget->removeTab(0);
    scr_ballast = new QScrollArea;
    bw = new BallastWidget;
    bw->setStyleSheet("background-color: rgb(85, 170, 0);");
     scr_ballast->setWidget(bw);
    ui->tabWidget->addTab(scr_ballast,"BALLAST TANKS");


}

MainWindow::~MainWindow()
{
    delete ui;
}

