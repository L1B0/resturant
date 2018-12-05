/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *oriMenu;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *clientMenu;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *sumPrice;
    QPushButton *squareCounts;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1387, 854);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        oriMenu = new QTableWidget(centralWidget);
        if (oriMenu->columnCount() < 5)
            oriMenu->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        oriMenu->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        oriMenu->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        oriMenu->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        oriMenu->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        oriMenu->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        oriMenu->setObjectName(QStringLiteral("oriMenu"));
        oriMenu->setGeometry(QRect(30, 80, 641, 701));
        oriMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
        oriMenu->setSelectionMode(QAbstractItemView::SingleSelection);
        oriMenu->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(700, 60, 151, 51));
        QFont font;
        font.setPointSize(25);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 20, 151, 51));
        label_3->setFont(font);
        clientMenu = new QTableWidget(centralWidget);
        if (clientMenu->columnCount() < 5)
            clientMenu->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        clientMenu->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        clientMenu->setObjectName(QStringLiteral("clientMenu"));
        clientMenu->setGeometry(QRect(700, 130, 651, 651));
        clientMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
        clientMenu->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1101, 50, 241, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        sumPrice = new QLineEdit(layoutWidget);
        sumPrice->setObjectName(QStringLiteral("sumPrice"));
        sumPrice->setEnabled(false);

        horizontalLayout->addWidget(sumPrice);

        squareCounts = new QPushButton(layoutWidget);
        squareCounts->setObjectName(QStringLiteral("squareCounts"));
        QFont font2;
        font2.setPointSize(14);
        squareCounts->setFont(font2);

        horizontalLayout->addWidget(squareCounts);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1387, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = oriMenu->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\217\234\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = oriMenu->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\350\217\234\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = oriMenu->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = oriMenu->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\347\261\273\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = oriMenu->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\217\243\345\221\263", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\350\264\246\345\215\225\350\257\246\346\203\205", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\217\234\350\260\261\346\230\216\347\273\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = clientMenu->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\350\217\234\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = clientMenu->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\350\217\234\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = clientMenu->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\345\217\243\345\221\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = clientMenu->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = clientMenu->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\266\210\350\264\271\351\207\221\351\242\235: ", nullptr));
        squareCounts->setText(QApplication::translate("MainWindow", "\347\273\223\350\264\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
