/********************************************************************************
** Form generated from reading UI file 'yellowdolphindownloader.ui'
**
** Created: Tue May 25 21:33:23 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YELLOWDOLPHINDOWNLOADER_H
#define UI_YELLOWDOLPHINDOWNLOADER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YellowDolphinDownloaderClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *tab_2;

    void setupUi(QWidget *YellowDolphinDownloaderClass)
    {
        if (YellowDolphinDownloaderClass->objectName().isEmpty())
            YellowDolphinDownloaderClass->setObjectName(QString::fromUtf8("YellowDolphinDownloaderClass"));
        YellowDolphinDownloaderClass->resize(550, 383);
        YellowDolphinDownloaderClass->setAcceptDrops(false);
        YellowDolphinDownloaderClass->setAutoFillBackground(true);
        YellowDolphinDownloaderClass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(YellowDolphinDownloaderClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(YellowDolphinDownloaderClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(YellowDolphinDownloaderClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(YellowDolphinDownloaderClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 260, 80, 25));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 50, 120, 80));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 30, 91, 20));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 91, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(YellowDolphinDownloaderClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(YellowDolphinDownloaderClass);
    } // setupUi

    void retranslateUi(QWidget *YellowDolphinDownloaderClass)
    {
        YellowDolphinDownloaderClass->setWindowTitle(QApplication::translate("YellowDolphinDownloaderClass", "YellowDolphinDownloader", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("YellowDolphinDownloaderClass", "PushButton", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("YellowDolphinDownloaderClass", "RadioButton", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "RadioButton", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("YellowDolphinDownloaderClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("YellowDolphinDownloaderClass", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class YellowDolphinDownloaderClass: public Ui_YellowDolphinDownloaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YELLOWDOLPHINDOWNLOADER_H
