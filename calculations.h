#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <QObject>

class Calculations : public QObject
{
    Q_OBJECT
public:
    explicit Calculations(QObject *parent = nullptr);

private slots:

    void sl_calculate_trim(double draft_aft, double draft_fwd);
    void sl_calculate_volume(double trim, double measure, int type);


signals:

};

#endif // CALCULATIONS_H
