/********************************************************************************
** Form generated from reading UI file 'vipinfoo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIPINFOO_H
#define UI_VIPINFOO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vipInfoo
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *phone;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *sum;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *level;
    QLabel *label;

    void setupUi(QDialog *vipInfoo)
    {
        if (vipInfoo->objectName().isEmpty())
            vipInfoo->setObjectName(QStringLiteral("vipInfoo"));
        vipInfoo->resize(435, 413);
        buttonBox = new QDialogButtonBox(vipInfoo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(70, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(vipInfoo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 120, 241, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setEnabled(false);

        horizontalLayout->addWidget(name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        phone = new QLineEdit(layoutWidget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setEnabled(false);

        horizontalLayout_5->addWidget(phone);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_6->addWidget(label_7);

        sum = new QLineEdit(layoutWidget);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setEnabled(false);

        horizontalLayout_6->addWidget(sum);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        level = new QLineEdit(layoutWidget);
        level->setObjectName(QStringLiteral("level"));
        level->setEnabled(false);

        horizontalLayout_4->addWidget(level);


        verticalLayout->addLayout(horizontalLayout_4);

        label = new QLabel(vipInfoo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 40, 111, 51));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        retranslateUi(vipInfoo);
        QObject::connect(buttonBox, SIGNAL(rejected()), vipInfoo, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), vipInfoo, SLOT(accept()));

        QMetaObject::connectSlotsByName(vipInfoo);
    } // setupUi

    void retranslateUi(QDialog *vipInfoo)
    {
        vipInfoo->setWindowTitle(QApplication::translate("vipInfoo", "Dialog", nullptr));
        label_2->setText(QApplication::translate("vipInfoo", "\345\247\223\345\220\215: ", nullptr));
        label_6->setText(QApplication::translate("vipInfoo", "\346\211\213\346\234\272\345\217\267: ", nullptr));
        label_7->setText(QApplication::translate("vipInfoo", "\346\266\210\350\264\271\346\200\273\351\242\235", nullptr));
        label_5->setText(QApplication::translate("vipInfoo", "\344\274\232\345\221\230\347\255\211\347\272\247: ", nullptr));
        label->setText(QApplication::translate("vipInfoo", "\344\274\232\345\221\230\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vipInfoo: public Ui_vipInfoo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIPINFOO_H
