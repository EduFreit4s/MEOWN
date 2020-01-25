/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btnAction;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *status_conexao;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *box_serial;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *box_velocidade;
    QPushButton *btnPlug;
    QWidget *tab_4;
    QTableWidget *tabelaStats;
    QWidget *Sobre;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(333, 218);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 341, 221));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        btnAction = new QPushButton(tab);
        btnAction->setObjectName(QString::fromUtf8("btnAction"));
        btnAction->setGeometry(QRect(130, 140, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 251, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        status_conexao = new QLabel(layoutWidget);
        status_conexao->setObjectName(QString::fromUtf8("status_conexao"));
        status_conexao->setStyleSheet(QString::fromUtf8("font: 25 17pt \"Bahnschrift Light\";"));
        status_conexao->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(status_conexao);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 25 15pt \"Bahnschrift Light\";"));

        horizontalLayout->addWidget(label);

        box_serial = new QComboBox(layoutWidget);
        box_serial->setObjectName(QString::fromUtf8("box_serial"));

        horizontalLayout->addWidget(box_serial);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 15pt \"Bahnschrift Light\";"));

        horizontalLayout_2->addWidget(label_2);

        box_velocidade = new QComboBox(layoutWidget);
        box_velocidade->setObjectName(QString::fromUtf8("box_velocidade"));

        horizontalLayout_2->addWidget(box_velocidade);


        verticalLayout->addLayout(horizontalLayout_2);

        btnPlug = new QPushButton(layoutWidget);
        btnPlug->setObjectName(QString::fromUtf8("btnPlug"));
        btnPlug->setStyleSheet(QString::fromUtf8("font: 25 15pt \"Bahnschrift Light\";"));

        verticalLayout->addWidget(btnPlug);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabelaStats = new QTableWidget(tab_4);
        if (tabelaStats->columnCount() < 1)
            tabelaStats->setColumnCount(1);
        if (tabelaStats->rowCount() < 3)
            tabelaStats->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelaStats->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelaStats->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelaStats->setVerticalHeaderItem(2, __qtablewidgetitem2);
        tabelaStats->setObjectName(QString::fromUtf8("tabelaStats"));
        tabelaStats->setGeometry(QRect(30, 40, 261, 91));
        tabelaStats->setStyleSheet(QString::fromUtf8("font: 25 10pt \"Bahnschrift Light\";"));
        tabelaStats->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tabelaStats->setAlternatingRowColors(true);
        tabelaStats->setSelectionMode(QAbstractItemView::NoSelection);
        tabelaStats->setTextElideMode(Qt::ElideLeft);
        tabelaStats->setShowGrid(true);
        tabelaStats->setGridStyle(Qt::DotLine);
        tabelaStats->setColumnCount(1);
        tabelaStats->horizontalHeader()->setVisible(false);
        tabelaStats->horizontalHeader()->setCascadingSectionResizes(false);
        tabelaStats->horizontalHeader()->setHighlightSections(true);
        tabelaStats->verticalHeader()->setCascadingSectionResizes(true);
        tabelaStats->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabelaStats->verticalHeader()->setStretchLastSection(false);
        tabWidget->addTab(tab_4, QString());
        Sobre = new QWidget();
        Sobre->setObjectName(QString::fromUtf8("Sobre"));
        tabWidget->addTab(Sobre, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAction->setText(QApplication::translate("MainWindow", "Alimentar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Home", nullptr));
        status_conexao->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Status: Desconectado</p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "Porta:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Velocidade:", nullptr));
        btnPlug->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Conex\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelaStats->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Tempo m\303\251dio de refei\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelaStats->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Vezes que se alimentou", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelaStats->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "N\303\255vel de comida", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Estatisticas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Sobre), QApplication::translate("MainWindow", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
