/********************************************************************************
** Form generated from reading UI file 'registervip.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERVIP_H
#define UI_REGISTERVIP_H

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

class Ui_registerVIP
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *phone;

    void setupUi(QDialog *registerVIP)
    {
        if (registerVIP->objectName().isEmpty())
            registerVIP->setObjectName(QStringLiteral("registerVIP"));
        registerVIP->resize(461, 362);
        buttonBox = new QDialogButtonBox(registerVIP);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(130, 270, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(registerVIP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 30, 201, 51));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        widget = new QWidget(registerVIP);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 120, 221, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        name = new QLineEdit(widget);
        name->setObjectName(QStringLiteral("name"));
        name->setMaxLength(6);

        horizontalLayout->addWidget(name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        phone = new QLineEdit(widget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setMaxLength(11);

        horizontalLayout_2->addWidget(phone);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(registerVIP);
        QObject::connect(buttonBox, SIGNAL(accepted()), registerVIP, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), registerVIP, SLOT(reject()));

        QMetaObject::connectSlotsByName(registerVIP);
    } // setupUi

    void retranslateUi(QDialog *registerVIP)
    {
        registerVIP->setWindowTitle(QApplication::translate("registerVIP", "Dialog", nullptr));
        label_3->setText(QApplication::translate("registerVIP", "\346\254\242\350\277\216\346\263\250\345\206\214\344\274\232\345\221\230\357\274\201", nullptr));
        label->setText(QApplication::translate("registerVIP", "\345\247\223\345\220\215: ", nullptr));
        label_2->setText(QApplication::translate("registerVIP", "\346\211\213\346\234\272\345\217\267: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerVIP: public Ui_registerVIP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERVIP_H
