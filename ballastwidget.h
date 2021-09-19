#ifndef BALLASTWIDGET_H
#define BALLASTWIDGET_H

#include <QWidget>
#include "ballastsmallunit.h"

namespace Ui {
class BallastWidget;
}

class BallastWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BallastWidget(QWidget *parent = nullptr);
    ~BallastWidget();

private:
    Ui::BallastWidget *ui;
    BallastSmallUnit *bwsm = new BallastSmallUnit[16];
};

#endif // BALLASTWIDGET_H
