#ifndef CALCULATIONS_H
#define CALCULATIONS_H


#define ULLAGE                  4
#define SOUNDING                5

#include <QObject>

class Calculations : public QObject
{
    Q_OBJECT
public:
    explicit Calculations(QObject *parent = nullptr);

private slots:

    void sl_calculate_trim(double draft_aft, double draft_fwd);

signals:

private:

};

#endif // CALCULATIONS_H
