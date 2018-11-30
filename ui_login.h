/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginPush;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *inputPhone;
    QLineEdit *phoneNumber;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *peopleNum;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(410, 316);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 181, 71));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 240, 168, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginPush = new QPushButton(layoutWidget);
        loginPush->setObjectName(QStringLiteral("loginPush"));

        horizontalLayout_2->addWidget(loginPush);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 130, 196, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inputPhone = new QLabel(layoutWidget1);
        inputPhone->setObjectName(QStringLiteral("inputPhone"));
        QFont font1;
        font1.setPointSize(12);
        inputPhone->setFont(font1);

        horizontalLayout->addWidget(inputPhone);

        phoneNumber = new QLineEdit(layoutWidget1);
        phoneNumber->setObjectName(QStringLiteral("phoneNumber"));
        phoneNumber->setMaxLength(11);

        horizontalLayout->addWidget(phoneNumber);

        layoutWidget2 = new QWidget(Login);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 170, 170, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        peopleNum = new QLineEdit(layoutWidget2);
        peopleNum->setObjectName(QStringLiteral("peopleNum"));
        peopleNum->setMaxLength(2);

        horizontalLayout_3->addWidget(peopleNum);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        label->setText(QApplication::translate("Login", "\346\254\242\350\277\216\344\275\277\347\224\250\347\202\271\351\244\220\347\263\273\347\273\237", nullptr));
        loginPush->setText(QApplication::translate("Login", "\345\274\200\345\247\213\347\202\271\351\244\220", nullptr));
        pushButton_2->setText(QApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
        inputPhone->setText(QApplication::translate("Login", "\346\202\250\347\232\204\346\211\213\346\234\272\345\217\267: ", nullptr));
        label_2->setText(QApplication::translate("Login", "\347\224\250\351\244\220\344\272\272\346\225\260: ", nullptr));
        peopleNum->setPlaceholderText(QApplication::translate("Login", "\344\270\215\350\266\205\350\277\20710\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
