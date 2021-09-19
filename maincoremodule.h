#ifndef MAINCOREMODULE_H
#define MAINCOREMODULE_H

#define CONVERTION_NOT_NEEDED   0
#define CONVERTION_NEEDED       1
#define MANUAL_CALCULATION      2
#define AUTOMATIC_CALCULATION   3


#include <QObject>




class MainCoreModule : public QObject
{
    Q_OBJECT
public:
    explicit MainCoreModule(QObject *parent = nullptr);

signals:

private:
    void set_configuration(QString data);

};

#endif // MAINCOREMODULE_H
