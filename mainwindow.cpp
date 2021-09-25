#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->removeTab(1);
    ui->tabWidget->removeTab(0);
    scr_ballast = new QScrollArea[4];
    bw = new BallastWidget[4];
    bw->setStyleSheet("background-color: rgb(85, 170, 0);");
     scr_ballast[0].setWidget(&bw[0]);
     scr_ballast[1].setWidget(&bw[1]);
     scr_ballast[2].setWidget(&bw[2]);
     scr_ballast[3].setWidget(&bw[3]);
    ui->tabWidget->addTab(&scr_ballast[0],"BALLAST TANKS");
    ui->tabWidget->addTab(&scr_ballast[1], "FUEL TANKS");
    ui->tabWidget->addTab(&scr_ballast[2], "DIESEL TANKS");
    ui->tabWidget->addTab(&scr_ballast[3], "MISC. TANKS");



}

MainWindow::~MainWindow()
{
    delete [] bw;
    delete ui;
}

