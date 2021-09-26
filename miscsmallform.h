#ifndef MISCSMALLFORM_H
#define MISCSMALLFORM_H

#include <QWidget>

namespace Ui {
class MiscSmallForm;
}

class MiscSmallForm : public QWidget
{
    Q_OBJECT

public:
    explicit MiscSmallForm(QWidget *parent = nullptr);
    ~MiscSmallForm();

private:
    Ui::MiscSmallForm *ui;
};

#endif // MISCSMALLFORM_H
