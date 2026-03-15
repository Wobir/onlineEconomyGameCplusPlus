/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_4;
    QPushButton *BuyButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QGraphicsView *graphicsView;
    QLabel *GameName;
    QLabel *Profit;
    QLabel *Money;
    QGroupBox *groupBox_3;
    QLabel *label_16;
    QPushButton *SellButton;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1136, 445);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 60, 371, 331));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 54, 17));
        BuyButton = new QPushButton(groupBox);
        BuyButton->setObjectName(QString::fromUtf8("BuyButton"));
        BuyButton->setGeometry(QRect(280, 300, 80, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 30, 61, 31));
        QFont font;
        font.setPointSize(12);
        label_5->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 80, 91, 31));
        label_6->setFont(font);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 130, 91, 31));
        label_7->setFont(font);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 180, 91, 31));
        label_8->setFont(font);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 230, 91, 31));
        label_9->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 60, 391, 331));
        graphicsView = new QGraphicsView(groupBox_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 20, 391, 311));
        GameName = new QLabel(centralwidget);
        GameName->setObjectName(QString::fromUtf8("GameName"));
        GameName->setGeometry(QRect(400, 0, 261, 51));
        QFont font1;
        font1.setPointSize(20);
        GameName->setFont(font1);
        GameName->setAlignment(Qt::AlignCenter);
        Profit = new QLabel(centralwidget);
        Profit->setObjectName(QString::fromUtf8("Profit"));
        Profit->setGeometry(QRect(900, 10, 171, 41));
        QFont font2;
        font2.setPointSize(14);
        Profit->setFont(font2);
        Money = new QLabel(centralwidget);
        Money->setObjectName(QString::fromUtf8("Money"));
        Money->setGeometry(QRect(40, 10, 171, 41));
        Money->setFont(font2);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(760, 60, 371, 331));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 50, 54, 17));
        SellButton = new QPushButton(groupBox_3);
        SellButton->setObjectName(QString::fromUtf8("SellButton"));
        SellButton->setGeometry(QRect(280, 300, 80, 25));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 30, 61, 31));
        label_17->setFont(font);
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 80, 91, 31));
        label_18->setFont(font);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 130, 91, 31));
        label_19->setFont(font);
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 180, 91, 31));
        label_20->setFont(font);
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 230, 91, 31));
        label_21->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1136, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\320\277\320\272\320\260 \320\260\320\272\321\202\320\270\320\262\320\260", nullptr));
        label_4->setText(QString());
        BuyButton->setText(QCoreApplication::translate("MainWindow", "Buy Stock", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pear", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MacroHard", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Edison", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Gold", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Silver", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        GameName->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\320\277\320\260\320\265\320\274/\320\237\321\200\320\276\320\264\320\260\320\265\320\274", nullptr));
        Profit->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\321\213\320\273\321\214:", nullptr));
        Money->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214\320\263\320\270:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\266\320\260 \320\260\320\272\321\202\320\270\320\262\320\260", nullptr));
        label_16->setText(QString());
        SellButton->setText(QCoreApplication::translate("MainWindow", "Sell Stock", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Pear", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "MacroHard", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Edison", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Gold", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Silver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
