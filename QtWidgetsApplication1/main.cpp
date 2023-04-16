#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QtWidgets/QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.show();
    //QLabel* label = new QLabel("Hi");
    //QPushButton* button = new QPushButton("Click");
    //button->show();
    //label->resize(400, 400);
    //label->show();
    return a.exec();
}
