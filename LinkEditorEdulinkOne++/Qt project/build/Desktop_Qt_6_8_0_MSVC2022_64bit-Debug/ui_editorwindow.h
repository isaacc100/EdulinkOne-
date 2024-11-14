/********************************************************************************
** Form generated from reading UI file 'editorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORWINDOW_H
#define UI_EDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QWidget *centralwidget;
    QPushButton *ConfirmBut;
    QTextEdit *URLInputBox;
    QLabel *Info1;
    QPushButton *InstructBut;
    QLabel *MadeBy;
    QPushButton *CloseBut;

    void setupUi(QMainWindow *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName("Editor");
        Editor->resize(380, 540);
        Editor->setMinimumSize(QSize(380, 540));
        Editor->setMaximumSize(QSize(380, 540));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(66, 66, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(99, 99, 99, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(82, 82, 82, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(33, 33, 33, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(44, 44, 44, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(31, 31, 31, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(0, 69, 122, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        QBrush brush9(QColor(0, 71, 126, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush11(QColor(255, 255, 255, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        QBrush brush12(QColor(33, 33, 33, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(46, 46, 46, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush13);
        Editor->setPalette(palette);
        Editor->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        centralwidget = new QWidget(Editor);
        centralwidget->setObjectName("centralwidget");
        ConfirmBut = new QPushButton(centralwidget);
        ConfirmBut->setObjectName("ConfirmBut");
        ConfirmBut->setGeometry(QRect(10, 380, 361, 29));
        ConfirmBut->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        URLInputBox = new QTextEdit(centralwidget);
        URLInputBox->setObjectName("URLInputBox");
        URLInputBox->setGeometry(QRect(10, 80, 361, 291));
        Info1 = new QLabel(centralwidget);
        Info1->setObjectName("Info1");
        Info1->setGeometry(QRect(10, 20, 361, 41));
        QPalette palette1;
        QBrush brush14(QColor(54, 54, 54, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        Info1->setPalette(palette1);
        Info1->setAutoFillBackground(false);
        Info1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px solid #2b2b2b;        /* Light gray border */\n"
"    border-radius: 10px;           /* Makes the corners rounded */\n"
"    padding: 5px;                  /* Adds spacing inside the label */\n"
"}\n"
""));
        InstructBut = new QPushButton(centralwidget);
        InstructBut->setObjectName("InstructBut");
        InstructBut->setGeometry(QRect(10, 420, 361, 29));
        InstructBut->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MadeBy = new QLabel(centralwidget);
        MadeBy->setObjectName("MadeBy");
        MadeBy->setGeometry(QRect(10, 500, 361, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        MadeBy->setPalette(palette2);
        MadeBy->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        MadeBy->setAutoFillBackground(false);
        MadeBy->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px solid #2b2b2b;        /* Light gray border */\n"
"    border-radius: 10px;           /* Makes the corners rounded */\n"
"    padding: 5px;                  /* Adds spacing inside the label */\n"
"}\n"
"\n"
""));
        CloseBut = new QPushButton(centralwidget);
        CloseBut->setObjectName("CloseBut");
        CloseBut->setGeometry(QRect(10, 460, 361, 29));
        CloseBut->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Editor->setCentralWidget(centralwidget);

        retranslateUi(Editor);

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Editor)
    {
        Editor->setWindowTitle(QCoreApplication::translate("Editor", "MainWindow", nullptr));
        ConfirmBut->setText(QCoreApplication::translate("Editor", "Confirm new URL", nullptr));
        Info1->setText(QCoreApplication::translate("Editor", "Paste the URL in the box below:", nullptr));
        InstructBut->setText(QCoreApplication::translate("Editor", "Open instruction page", nullptr));
        MadeBy->setText(QCoreApplication::translate("Editor", "Made by Isaac Critchley - IC192020@igs.mlt.co.uk", nullptr));
        CloseBut->setText(QCoreApplication::translate("Editor", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORWINDOW_H
