#ifndef BALLASTSMALLUNIT_H
#define BALLASTSMALLUNIT_H

#include <QWidget>

namespace Ui {
class BallastSmallUnit;
}

class BallastSmallUnit : public QWidget
{
    Q_OBJECT

public:
    explicit BallastSmallUnit(QWidget *parent = nullptr);
    ~BallastSmallUnit();

private:
    Ui::BallastSmallUnit *ui;
};

#endif // BALLASTSMALLUNIT_H
