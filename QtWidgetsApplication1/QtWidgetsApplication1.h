#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
    Ui::QtWidgetsApplication1Class ui;
private slots:
    void on_pushButtonClose_clicked();
    //void on_clickButton();

private:
    
};
