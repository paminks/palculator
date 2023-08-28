/********************************************************************************
** Form generated from reading UI file 'palculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PALCULATOR_H
#define UI_PALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Palculator
{
public:
    QAction *actionAbout_Palculator;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button6;
    QLineEdit *Display;
    QPushButton *Button7;
    QPushButton *Button4;
    QPushButton *Button3;
    QPushButton *Button9;
    QPushButton *Equals;
    QPushButton *Divide;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Minus;
    QPushButton *PlusMinus;
    QPushButton *Clear;
    QPushButton *Button0;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuAbout;

    void setupUi(QMainWindow *Palculator)
    {
        if (Palculator->objectName().isEmpty())
            Palculator->setObjectName(QString::fromUtf8("Palculator"));
        Palculator->resize(749, 450);
        QPalette palette;
        QBrush brush(QColor(255, 120, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        Palculator->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/src/calc.png"), QSize(), QIcon::Normal, QIcon::Off);
        Palculator->setWindowIcon(icon);
        actionAbout_Palculator = new QAction(Palculator);
        actionAbout_Palculator->setObjectName(QString::fromUtf8("actionAbout_Palculator"));
        centralwidget = new QWidget(Palculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button1, 17, 0, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button2, 17, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button8, 15, 1, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button5, 16, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button6, 16, 2, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Vera Sans Mono"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        Display->setFont(font);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 6);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button7, 15, 0, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button4, 16, 0, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button3, 17, 2, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button9, 15, 2, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 16, 4, 2, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 19, 4, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 19, 3, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 17, 3, 1, 1);

        Minus = new QPushButton(centralwidget);
        Minus->setObjectName(QString::fromUtf8("Minus"));
        sizePolicy.setHeightForWidth(Minus->sizePolicy().hasHeightForWidth());
        Minus->setSizePolicy(sizePolicy);
        Minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Minus, 16, 3, 1, 1);

        PlusMinus = new QPushButton(centralwidget);
        PlusMinus->setObjectName(QString::fromUtf8("PlusMinus"));
        sizePolicy.setHeightForWidth(PlusMinus->sizePolicy().hasHeightForWidth());
        PlusMinus->setSizePolicy(sizePolicy);
        PlusMinus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(PlusMinus, 15, 3, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray,\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 15, 4, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Button0, 19, 1, 1, 1);

        Palculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Palculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Palculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Palculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 749, 21));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Palculator->setMenuBar(menubar);

        menubar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout_Palculator);

        retranslateUi(Palculator);

        QMetaObject::connectSlotsByName(Palculator);
    } // setupUi

    void retranslateUi(QMainWindow *Palculator)
    {
        Palculator->setWindowTitle(QCoreApplication::translate("Palculator", "Palculator", nullptr));
        actionAbout_Palculator->setText(QCoreApplication::translate("Palculator", "About Palculator", nullptr));
        Button1->setText(QCoreApplication::translate("Palculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("Palculator", "2", nullptr));
        Button8->setText(QCoreApplication::translate("Palculator", "8", nullptr));
        Button5->setText(QCoreApplication::translate("Palculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Palculator", "6", nullptr));
        Display->setText(QCoreApplication::translate("Palculator", "0,0", nullptr));
        Button7->setText(QCoreApplication::translate("Palculator", "7", nullptr));
        Button4->setText(QCoreApplication::translate("Palculator", "4", nullptr));
        Button3->setText(QCoreApplication::translate("Palculator", "3", nullptr));
        Button9->setText(QCoreApplication::translate("Palculator", "9", nullptr));
        Equals->setText(QCoreApplication::translate("Palculator", "=", nullptr));
        Divide->setText(QCoreApplication::translate("Palculator", "/", nullptr));
        Multiply->setText(QCoreApplication::translate("Palculator", "*", nullptr));
        Add->setText(QCoreApplication::translate("Palculator", "+", nullptr));
        Minus->setText(QCoreApplication::translate("Palculator", "-", nullptr));
        PlusMinus->setText(QCoreApplication::translate("Palculator", "+/-", nullptr));
        Clear->setText(QCoreApplication::translate("Palculator", "AC", nullptr));
        Button0->setText(QCoreApplication::translate("Palculator", "0", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Palculator", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Palculator: public Ui_Palculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PALCULATOR_H
