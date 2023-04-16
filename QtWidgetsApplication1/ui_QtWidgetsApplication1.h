/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1cbdmmF.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTWIDGETSAPPLICATION1CBDMMF_H
#define QTWIDGETSAPPLICATION1CBDMMF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QPushButton *but;
    QTextEdit *path;
    QTextEdit *textEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName("QtWidgetsApplication1Class");
        QtWidgetsApplication1Class->resize(471, 738);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName("centralWidget");
        but = new QPushButton(centralWidget);
        but->setObjectName("but");
        but->setGeometry(QRect(0, 110, 471, 81));
        path = new QTextEdit(centralWidget);
        path->setObjectName("path");
        path->setGeometry(QRect(0, 40, 471, 71));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 190, 471, 491));
        QFont font;
        font.setPointSize(15);
        textEdit->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 471, 41));
        QFont font1;
        font1.setPointSize(22);
        label->setFont(font1);
        label->setContextMenuPolicy(Qt::NoContextMenu);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::MarkdownText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 471, 22));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName("mainToolBar");
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName("statusBar");
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);
        QObject::connect(but, SIGNAL(clicked(bool)), QtWidgetsApplication1Class, SLOT(on_pushButtonClose_clicked()));

        but->setDefault(false);


        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        but->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\264\320\276 \321\204\320\260\320\271\320\273\320\260 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTWIDGETSAPPLICATION1CBDMMF_H
