/********************************************************************************
** Form generated from reading UI file 'yellowdolphindownloader.ui'
**
** Created: Tue May 25 23:41:49 2010
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
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
    QPushButton *searchmultimeter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *downloadSelect;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioSAVE;
    QRadioButton *radioLOG;
    QRadioButton *radioButton;
    QGroupBox *outputBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *outputBox_2;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *LogCheckBox;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QLabel *label_3;

    void setupUi(QWidget *YellowDolphinDownloaderClass)
    {
        if (YellowDolphinDownloaderClass->objectName().isEmpty())
            YellowDolphinDownloaderClass->setObjectName(QString::fromUtf8("YellowDolphinDownloaderClass"));
        YellowDolphinDownloaderClass->resize(700, 500);
        YellowDolphinDownloaderClass->setMaximumSize(QSize(700, 500));
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

        searchmultimeter = new QPushButton(YellowDolphinDownloaderClass);
        searchmultimeter->setObjectName(QString::fromUtf8("searchmultimeter"));

        horizontalLayout->addWidget(searchmultimeter);


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
        radioSAVE->setChecked(true);

        verticalLayout_2->addWidget(radioSAVE);

        radioLOG = new QRadioButton(downloadSelect);
        radioLOG->setObjectName(QString::fromUtf8("radioLOG"));

        verticalLayout_2->addWidget(radioLOG);

        radioButton = new QRadioButton(downloadSelect);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);


        horizontalLayout_2->addWidget(downloadSelect);

        outputBox = new QGroupBox(tab);
        outputBox->setObjectName(QString::fromUtf8("outputBox"));
        verticalLayout_4 = new QVBoxLayout(outputBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButton_2 = new QRadioButton(outputBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(outputBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(outputBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_4->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(outputBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_4->addWidget(radioButton_5);


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
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        graphicsView = new QGraphicsView(tab_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_6->addWidget(graphicsView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        outputBox_2 = new QGroupBox(tab_2);
        outputBox_2->setObjectName(QString::fromUtf8("outputBox_2"));
        outputBox_2->setMinimumSize(QSize(200, 200));
        outputBox_2->setMaximumSize(QSize(200, 200));
        verticalLayout_5 = new QVBoxLayout(outputBox_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        radioButton_6 = new QRadioButton(outputBox_2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setChecked(true);

        verticalLayout_5->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(outputBox_2);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout_5->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(outputBox_2);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_5->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(outputBox_2);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_5->addWidget(radioButton_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        LogCheckBox = new QCheckBox(outputBox_2);
        LogCheckBox->setObjectName(QString::fromUtf8("LogCheckBox"));

        horizontalLayout_4->addWidget(LogCheckBox);

        pushButton_3 = new QPushButton(outputBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout_3->addWidget(outputBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(120, 200));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(80, 10));

        verticalLayout_7->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(100, 40));

        verticalLayout_7->addWidget(lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 10));
        label_2->setMaximumSize(QSize(100, 10));

        verticalLayout_7->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(100, 40));

        verticalLayout_7->addWidget(lineEdit_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_6->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(161, 160, 191, 31));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(YellowDolphinDownloaderClass);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(YellowDolphinDownloaderClass);
    } // setupUi

    void retranslateUi(QWidget *YellowDolphinDownloaderClass)
    {
        YellowDolphinDownloaderClass->setWindowTitle(QApplication::translate("YellowDolphinDownloaderClass", "YellowDolphinDownloader", 0, QApplication::UnicodeUTF8));
        searchmultimeter->setText(QApplication::translate("YellowDolphinDownloaderClass", "Search for Multimeter", 0, QApplication::UnicodeUTF8));
        downloadSelect->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Data Source", 0, QApplication::UnicodeUTF8));
        radioSAVE->setText(QApplication::translate("YellowDolphinDownloaderClass", "SAVE", 0, QApplication::UnicodeUTF8));
        radioLOG->setText(QApplication::translate("YellowDolphinDownloaderClass", "LOG", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("YellowDolphinDownloaderClass", "Load from binary file", 0, QApplication::UnicodeUTF8));
        outputBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Output Format", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "Binary Format", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("YellowDolphinDownloaderClass", "CSV (Full)", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("YellowDolphinDownloaderClass", "CSV (Reduced)", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("YellowDolphinDownloaderClass", "OpenOffice Calc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("YellowDolphinDownloaderClass", "Download", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("YellowDolphinDownloaderClass", "Download Data", 0, QApplication::UnicodeUTF8));
        outputBox_2->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Output Format", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("YellowDolphinDownloaderClass", "Binary Format", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("YellowDolphinDownloaderClass", "CSV (Full)", 0, QApplication::UnicodeUTF8));
        radioButton_8->setText(QApplication::translate("YellowDolphinDownloaderClass", "CSV (Reduced)", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("YellowDolphinDownloaderClass", "OpenOffice Calc", 0, QApplication::UnicodeUTF8));
        LogCheckBox->setText(QApplication::translate("YellowDolphinDownloaderClass", "Enable Log", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("YellowDolphinDownloaderClass", "Start Querying", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Actual Values", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("YellowDolphinDownloaderClass", "Primary Value", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "Secondary Value", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("YellowDolphinDownloaderClass", "Remote Logging", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("YellowDolphinDownloaderClass", "You cant see anything here yet :P", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("YellowDolphinDownloaderClass", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class YellowDolphinDownloaderClass: public Ui_YellowDolphinDownloaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YELLOWDOLPHINDOWNLOADER_H
