#include "QtWidgetsApplication1.h"
#include "ui_QtWidgetsApplication1.h"
#include <QMessageBox>
#include <QTextEdit>
#include <QString>
#include <QFile>
#include <QTextEdit>
#include <Qset>
QtWidgetsApplication1::QtWidgetsApplication1(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}
void QtWidgetsApplication1::on_pushButtonClose_clicked(){
	QString path=ui.path->document()->toPlainText();
	QFile file(path);
	QVector <QString> arr;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) { // ��������� ���� � ������ ������ � ���������� ������
        QTextStream in(&file); // ������� ��������� ����� ��� ������ �����
        QString fileContents = in.readAll(); // ������ ���������� ����� � ������
        QSet <QString> out;
        QString tmp="";
        for (int i = 0; i < fileContents.size(); i++) {
            if ((fileContents[i] == ' ' || fileContents[i] == '\n')) {
                if (tmp.size() == 4) {
                    out.insert(tmp);
                }
                tmp.clear();
            }
            else {
                tmp.push_back(fileContents[i]);
            }
        }
        fileContents.clear();
        for (auto i : out) {
            fileContents += i+"\n";
        }
        ui.textEdit->setPlainText(fileContents); // ������������� ���������� ����� � ������ textEdit (����� ��������������, ��� � ��� ���� ������ textEdit, � ������� �� ������ ���������� ���������� �����)
        file.close(); // ��������� ����
    }
    else {
        QMessageBox message;
        message.setText("This file not found");
        message.exec();
    }
}