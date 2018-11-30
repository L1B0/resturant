/********************************************************************************
** Form generated from reading UI file 'seat.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEAT_H
#define UI_SEAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seat
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *checkBox_4;

    void setupUi(QWidget *Seat)
    {
        if (Seat->objectName().isEmpty())
            Seat->setObjectName(QStringLiteral("Seat"));
        Seat->resize(684, 636);
        widget = new QWidget(Seat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 140, 161, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_3->addWidget(checkBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_4->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Seat);

        QMetaObject::connectSlotsByName(Seat);
    } // setupUi

    void retranslateUi(QWidget *Seat)
    {
        Seat->setWindowTitle(QApplication::translate("Seat", "Form", nullptr));
        label->setText(QApplication::translate("Seat", "\344\270\200\344\272\272\346\241\214", nullptr));
        checkBox->setText(QString());
        label_2->setText(QApplication::translate("Seat", "\344\272\214\344\272\272\346\241\214", nullptr));
        checkBox_2->setText(QString());
        label_3->setText(QApplication::translate("Seat", "\345\233\233\344\272\272\346\241\214", nullptr));
        checkBox_3->setText(QString());
        label_4->setText(QApplication::translate("Seat", "\345\215\201\344\272\272\346\241\214", nullptr));
        checkBox_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Seat: public Ui_Seat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEAT_H
