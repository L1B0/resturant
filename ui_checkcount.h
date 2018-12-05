/********************************************************************************
** Form generated from reading UI file 'checkcount.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKCOUNT_H
#define UI_CHECKCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkCount
{
public:
    QLabel *vipTitle;
    QLabel *payCode;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *sumPrice;
    QHBoxLayout *horizontalLayout_2;
    QLabel *realPrice;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ac;
    QPushButton *reject;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *clientMenu;
    QTextEdit *textEdit;

    void setupUi(QDialog *checkCount)
    {
        if (checkCount->objectName().isEmpty())
            checkCount->setObjectName(QStringLiteral("checkCount"));
        checkCount->resize(1136, 688);
        vipTitle = new QLabel(checkCount);
        vipTitle->setObjectName(QStringLiteral("vipTitle"));
        vipTitle->setGeometry(QRect(50, 30, 341, 41));
        QFont font;
        font.setPointSize(15);
        vipTitle->setFont(font);
        payCode = new QLabel(checkCount);
        payCode->setObjectName(QStringLiteral("payCode"));
        payCode->setGeometry(QRect(660, 30, 441, 611));
        payCode->setScaledContents(true);
        layoutWidget = new QWidget(checkCount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 10, 208, 74));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sumPrice = new QLabel(layoutWidget);
        sumPrice->setObjectName(QStringLiteral("sumPrice"));
        sumPrice->setFont(font);

        horizontalLayout->addWidget(sumPrice);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        realPrice = new QLabel(layoutWidget);
        realPrice->setObjectName(QStringLiteral("realPrice"));
        realPrice->setFont(font);

        horizontalLayout_2->addWidget(realPrice);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(checkCount);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(950, 650, 168, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ac = new QPushButton(layoutWidget1);
        ac->setObjectName(QStringLiteral("ac"));

        horizontalLayout_3->addWidget(ac);

        reject = new QPushButton(layoutWidget1);
        reject->setObjectName(QStringLiteral("reject"));

        horizontalLayout_3->addWidget(reject);

        layoutWidget2 = new QWidget(checkCount);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 100, 611, 541));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        clientMenu = new QTableWidget(layoutWidget2);
        if (clientMenu->columnCount() < 5)
            clientMenu->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        clientMenu->setObjectName(QStringLiteral("clientMenu"));
        clientMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
        clientMenu->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(clientMenu);

        textEdit = new QTextEdit(layoutWidget2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        retranslateUi(checkCount);

        QMetaObject::connectSlotsByName(checkCount);
    } // setupUi

    void retranslateUi(QDialog *checkCount)
    {
        checkCount->setWindowTitle(QApplication::translate("checkCount", "Dialog", nullptr));
        vipTitle->setText(QApplication::translate("checkCount", "\346\202\250\347\232\204\347\255\211\347\272\247\344\270\272:  \344\272\253\345\217\227 \346\212\230\344\274\230\346\203\240\357\274\201", nullptr));
        payCode->setText(QString());
        sumPrice->setText(QApplication::translate("checkCount", "\346\266\210\350\264\271\351\207\221\351\242\235: ", nullptr));
        realPrice->setText(QApplication::translate("checkCount", "\345\272\224\346\224\266: ", nullptr));
        ac->setText(QApplication::translate("checkCount", "\347\241\256\345\256\232", nullptr));
        reject->setText(QApplication::translate("checkCount", "\345\217\226\346\266\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem = clientMenu->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("checkCount", "\350\217\234\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = clientMenu->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("checkCount", "\350\217\234\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = clientMenu->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("checkCount", "\345\217\243\345\221\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = clientMenu->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("checkCount", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = clientMenu->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("checkCount", "\344\273\267\346\240\274", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("checkCount", "\350\257\267\345\234\250\350\277\231\345\206\231\344\270\213\346\202\250\347\232\204\345\244\207\346\263\250\357\274\214\344\270\215\350\266\205\350\277\207100\345\255\227\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkCount: public Ui_checkCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKCOUNT_H
