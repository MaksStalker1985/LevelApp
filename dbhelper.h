#ifndef DBHELPER_H
#define DBHELPER_H

#include <QObject>

class DBHelper : public QObject
{
    Q_OBJECT
public:
    explicit DBHelper(QObject *parent = nullptr);

signals:

};

#endif // DBHELPER_H
