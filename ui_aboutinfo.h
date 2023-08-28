/********************************************************************************
** Form generated from reading UI file 'aboutinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTINFO_H
#define UI_ABOUTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AboutInfo
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *AboutInfo)
    {
        if (AboutInfo->objectName().isEmpty())
            AboutInfo->setObjectName(QString::fromUtf8("AboutInfo"));
        AboutInfo->resize(813, 326);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutInfo->sizePolicy().hasHeightForWidth());
        AboutInfo->setSizePolicy(sizePolicy);
        AboutInfo->setMaximumSize(QSize(813, 326));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/src/about.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AboutInfo->setWindowIcon(icon);
        textEdit = new QTextEdit(AboutInfo);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(13, 9, 791, 311));
        textEdit->setMaximumSize(QSize(791, 311));

        retranslateUi(AboutInfo);

        QMetaObject::connectSlotsByName(AboutInfo);
    } // setupUi

    void retranslateUi(QDialog *AboutInfo)
    {
        AboutInfo->setWindowTitle(QCoreApplication::translate("AboutInfo", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("AboutInfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:15px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-weight:700; font-style:italic; color:#ffa348; background-color:#ffffff;\">Palculator is a free and open source calculator.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family"
                        ":'monospace'; color:#222222;\">Copyright (C) </span><span style=\" font-family:'monospace'; font-style:italic; color:#222222;\">2023</span><span style=\" font-family:'monospace'; color:#222222;\">  Eren Ayd\304\261n</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'monospace'; font-style:italic; color:#222222; background-color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">This program is free software; you can redistribute it and/or</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">modify it un"
                        "der the terms of the GNU General Public License</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">as published by the Free Software Foundation; either version 2</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">of the License, or any later version.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'monospace'; color:#222222; background-color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; backgroun"
                        "d-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">This program is distributed in the hope that it will be useful,</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">but WITHOUT ANY WARRANTY; without even the implied warranty of</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">GNU General Public License for more details.</span><"
                        "/p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'monospace'; color:#222222; background-color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">You should have received a copy of the GNU General Public License</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'monospace'; color:#222222;\">along with this program; if not, write to the Free Software</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span styl"
                        "e=\" font-family:'monospace'; color:#222222;\">Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutInfo: public Ui_AboutInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTINFO_H
