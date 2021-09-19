#ifndef UNIT_H
#define UNIT_H

#define CONVERTION_NOT_NEEDED   0
#define CONVERTION_NEEDED       1
#define MANUAL_CALCULATION      2
#define AUTOMATIC_CALCULATION   3
#define ULLAGE                  4
#define SOUNDING                5

#include <QObject>

class Unit : public QObject
{
    Q_OBJECT
public:
    explicit Unit(QObject *parent = nullptr);

signals:
void sig_get_value(double value);
void sig_send_value(double value, int type);
private:

    int I_UNIT_DATA[3] = {0,0,0};
    double D_UNIT_VALUE = 0;

};

#endif // UNIT_H
