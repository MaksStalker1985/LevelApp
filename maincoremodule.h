#ifndef MAINCOREMODULE_H
#define MAINCOREMODULE_H

#include <QObject>

class MainCoreModule : public QObject
{
    Q_OBJECT
public:
    explicit MainCoreModule(QObject *parent = nullptr);

signals:

};

#endif // MAINCOREMODULE_H
