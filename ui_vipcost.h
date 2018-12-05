/********************************************************************************
** Form generated from reading UI file 'vipcost.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIPCOST_H
#define UI_VIPCOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_vipCost
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *vipcost;

    void setupUi(QDialog *vipCost)
    {
        if (vipCost->objectName().isEmpty())
            vipCost->setObjectName(QStringLiteral("vipCost"));
        vipCost->resize(667, 699);
        buttonBox = new QDialogButtonBox(vipCost);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 640, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        vipcost = new QTableWidget(vipCost);
        if (vipcost->columnCount() < 5)
            vipcost->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        vipcost->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        vipcost->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        vipcost->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        vipcost->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        vipcost->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        vipcost->setObjectName(QStringLiteral("vipcost"));
        vipcost->setGeometry(QRect(30, 30, 611, 591));
        vipcost->setEditTriggers(QAbstractItemView::NoEditTriggers);

        retranslateUi(vipCost);
        QObject::connect(buttonBox, SIGNAL(accepted()), vipCost, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), vipCost, SLOT(reject()));

        QMetaObject::connectSlotsByName(vipCost);
    } // setupUi

    void retranslateUi(QDialog *vipCost)
    {
        vipCost->setWindowTitle(QApplication::translate("vipCost", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = vipcost->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vipCost", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = vipcost->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vipCost", "\350\256\242\345\215\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = vipcost->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vipCost", "\346\266\210\350\264\271\351\207\221\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = vipcost->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vipCost", "\346\241\214\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = vipcost->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("vipCost", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vipCost: public Ui_vipCost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIPCOST_H
