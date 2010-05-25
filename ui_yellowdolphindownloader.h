/********************************************************************************
** Form generated from reading UI file 'yellowdolphindownloader.ui'
**
** Created: Tue May 25 21:49:33 2010
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
#include <QtGui/QProgressBar>
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
    QComboBox *interfacesCombo;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *downloadSelect;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioSAVE;
    QRadioButton *radioLOG;
    QGroupBox *outputBox;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *YellowDolphinDownloaderClass)
    {
        if (YellowDolphinDownloaderClass->objectName().isEmpty())
            YellowDolphinDownloaderClass->setObjectName(QString::fromUtf8("YellowDolphinDownloaderClass"));
        YellowDolphinDownloaderClass->resize(550, 427);
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
        interfacesCombo = new QComboBox(YellowDolphinDownloaderClass);
        interfacesCombo->setObjectName(QString::fromUtf8("interfacesCombo"));

        horizontalLayout->addWidget(interfacesCombo);

        pushButton_2 = new QPushButton(YellowDolphinDownloaderClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(YellowDolphinDownloaderClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        downloadSelect = new QGroupBox(tab);
        downloadSelect->setObjectName(QString::fromUtf8("downloadSelect"));
        verticalLayout_2 = new QVBoxLayout(downloadSelect);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioSAVE = new QRadioButton(downloadSelect);
        radioSAVE->setObjectName(QString::fromUtf8("radioSAVE"));

        verticalLayout_2->addWidget(radioSAVE);

        radioLOG = new QRadioButton(downloadSelect);
        radioLOG->setObjectName(QString::fromUtf8("radioLOG"));

        verticalLayout_2->addWidget(radioLOG);


        horizontalLayout_2->addWidget(downloadSelect);

        outputBox = new QGroupBox(tab);
        outputBox->setObjectName(QString::fromUtf8("outputBox"));

        horizontalLayout_2->addWidget(outputBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_3->addWidget(progressBar);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(YellowDolphinDownloaderClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(YellowDolphinDownloaderClass);
    } // setupUi

    void retranslateUi(QWidget *YellowDolphinDownloaderClass)
    {
        YellowDolphinDownloaderClass->setWindowTitle(QApplication::translate("YellowDolphinDownloaderClass", "YellowDolphinDownloader", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "PushButton", 0, QApplication::UnicodeUTF8));
        downloadSelect->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Data Source", 0, QApplication::UnicodeUTF8));
        radioSAVE->setText(QApplication::translate("YellowDolphinDownloaderClass", "SAVE", 0, QApplication::UnicodeUTF8));
        radioLOG->setText(QApplication::translate("YellowDolphinDownloaderClass", "LOG", 0, QApplication::UnicodeUTF8));
        outputBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Output Format", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("YellowDolphinDownloaderClass", "Download", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("YellowDolphinDownloaderClass", "Download Data", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("YellowDolphinDownloaderClass", "Remote Logging", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("YellowDolphinDownloaderClass", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class YellowDolphinDownloaderClass: public Ui_YellowDolphinDownloaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YELLOWDOLPHINDOWNLOADER_H
