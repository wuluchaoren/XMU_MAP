/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(733, 488);
        QIcon icon;
        icon.addFile(QStringLiteral("../../icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(Widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-1, -1, 741, 491));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\271\263\345\222\214\347\256\200\344\275\223"));
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        frame->setFont(font);
        frame->setStyleSheet(QStringLiteral("#frame{ border-image: url(:/new/pic/pic/12333333.jpg);} #frame * { border-image:url(); }"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 421, 321));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\344\271\246\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "XMU MAP", 0));
        label->setText(QApplication::translate("Widget", "\345\216\246\351\227\250\345\244\247\345\255\246\347\224\265\345\255\220\345\234\260\345\233\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
