/********************************************************************************
** Form generated from reading UI file 'yellowdolphindownloader.ui'
**
** Created: Thu May 27 23:43:55 2010
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
    QWidget *tab_download;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *downloadSelectBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioDownloadSave;
    QRadioButton *radioDownloadLog;
    QRadioButton *radioUseBinFileDL;
    QGroupBox *downloadOutputBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioDownload2Bin;
    QRadioButton *radioDownload2CSVF;
    QRadioButton *radioDownload2CSVR;
    QRadioButton *radioDownload2OO;
    QPushButton *downloadButton;
    QProgressBar *progressBar;
    QWidget *tab_remote;
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
    QWidget *tab_settings;
    QVBoxLayout *verticalLayout_8;
    QPushButton *refreshInterfacesBut;
    QGroupBox *groupBox_2;

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
        interfacesCombo->setMouseTracking(true);
        interfacesCombo->setEditable(true);

        horizontalLayout->addWidget(interfacesCombo);

        searchmultimeter = new QPushButton(YellowDolphinDownloaderClass);
        searchmultimeter->setObjectName(QString::fromUtf8("searchmultimeter"));

        horizontalLayout->addWidget(searchmultimeter);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(YellowDolphinDownloaderClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tab_download = new QWidget();
        tab_download->setObjectName(QString::fromUtf8("tab_download"));
        verticalLayout_3 = new QVBoxLayout(tab_download);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        downloadSelectBox = new QGroupBox(tab_download);
        downloadSelectBox->setObjectName(QString::fromUtf8("downloadSelectBox"));
        verticalLayout_2 = new QVBoxLayout(downloadSelectBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioDownloadSave = new QRadioButton(downloadSelectBox);
        radioDownloadSave->setObjectName(QString::fromUtf8("radioDownloadSave"));
        radioDownloadSave->setChecked(true);

        verticalLayout_2->addWidget(radioDownloadSave);

        radioDownloadLog = new QRadioButton(downloadSelectBox);
        radioDownloadLog->setObjectName(QString::fromUtf8("radioDownloadLog"));

        verticalLayout_2->addWidget(radioDownloadLog);

        radioUseBinFileDL = new QRadioButton(downloadSelectBox);
        radioUseBinFileDL->setObjectName(QString::fromUtf8("radioUseBinFileDL"));

        verticalLayout_2->addWidget(radioUseBinFileDL);


        horizontalLayout_2->addWidget(downloadSelectBox);

        downloadOutputBox = new QGroupBox(tab_download);
        downloadOutputBox->setObjectName(QString::fromUtf8("downloadOutputBox"));
        verticalLayout_4 = new QVBoxLayout(downloadOutputBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioDownload2Bin = new QRadioButton(downloadOutputBox);
        radioDownload2Bin->setObjectName(QString::fromUtf8("radioDownload2Bin"));
        radioDownload2Bin->setChecked(true);

        verticalLayout_4->addWidget(radioDownload2Bin);

        radioDownload2CSVF = new QRadioButton(downloadOutputBox);
        radioDownload2CSVF->setObjectName(QString::fromUtf8("radioDownload2CSVF"));

        verticalLayout_4->addWidget(radioDownload2CSVF);

        radioDownload2CSVR = new QRadioButton(downloadOutputBox);
        radioDownload2CSVR->setObjectName(QString::fromUtf8("radioDownload2CSVR"));

        verticalLayout_4->addWidget(radioDownload2CSVR);

        radioDownload2OO = new QRadioButton(downloadOutputBox);
        radioDownload2OO->setObjectName(QString::fromUtf8("radioDownload2OO"));

        verticalLayout_4->addWidget(radioDownload2OO);


        horizontalLayout_2->addWidget(downloadOutputBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        downloadButton = new QPushButton(tab_download);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));

        verticalLayout_3->addWidget(downloadButton);

        progressBar = new QProgressBar(tab_download);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_3->addWidget(progressBar);

        tabWidget->addTab(tab_download, QString());
        tab_remote = new QWidget();
        tab_remote->setObjectName(QString::fromUtf8("tab_remote"));
        verticalLayout_6 = new QVBoxLayout(tab_remote);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        graphicsView = new QGraphicsView(tab_remote);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_6->addWidget(graphicsView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        outputBox_2 = new QGroupBox(tab_remote);
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

        groupBox = new QGroupBox(tab_remote);
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

        tabWidget->addTab(tab_remote, QString());
        tab_settings = new QWidget();
        tab_settings->setObjectName(QString::fromUtf8("tab_settings"));
        verticalLayout_8 = new QVBoxLayout(tab_settings);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        refreshInterfacesBut = new QPushButton(tab_settings);
        refreshInterfacesBut->setObjectName(QString::fromUtf8("refreshInterfacesBut"));

        verticalLayout_8->addWidget(refreshInterfacesBut);

        groupBox_2 = new QGroupBox(tab_settings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout_8->addWidget(groupBox_2);

        tabWidget->addTab(tab_settings, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(interfacesCombo, searchmultimeter);
        QWidget::setTabOrder(searchmultimeter, tabWidget);
        QWidget::setTabOrder(tabWidget, radioDownloadSave);
        QWidget::setTabOrder(radioDownloadSave, radioDownloadLog);
        QWidget::setTabOrder(radioDownloadLog, radioUseBinFileDL);
        QWidget::setTabOrder(radioUseBinFileDL, radioDownload2Bin);
        QWidget::setTabOrder(radioDownload2Bin, radioDownload2CSVF);
        QWidget::setTabOrder(radioDownload2CSVF, radioDownload2CSVR);
        QWidget::setTabOrder(radioDownload2CSVR, radioDownload2OO);
        QWidget::setTabOrder(radioDownload2OO, downloadButton);
        QWidget::setTabOrder(downloadButton, radioButton_6);
        QWidget::setTabOrder(radioButton_6, radioButton_7);
        QWidget::setTabOrder(radioButton_7, radioButton_8);
        QWidget::setTabOrder(radioButton_8, radioButton_9);
        QWidget::setTabOrder(radioButton_9, LogCheckBox);
        QWidget::setTabOrder(LogCheckBox, pushButton_3);
        QWidget::setTabOrder(pushButton_3, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, graphicsView);

        retranslateUi(YellowDolphinDownloaderClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(YellowDolphinDownloaderClass);
    } // setupUi

    void retranslateUi(QWidget *YellowDolphinDownloaderClass)
    {
        YellowDolphinDownloaderClass->setWindowTitle(QApplication::translate("YellowDolphinDownloaderClass", "YellowDolphinDownloader", 0, QApplication::UnicodeUTF8));
        interfacesCombo->clear();
        interfacesCombo->insertItems(0, QStringList()
         << QApplication::translate("YellowDolphinDownloaderClass", "No serial found", 0, QApplication::UnicodeUTF8)
        );
        searchmultimeter->setText(QApplication::translate("YellowDolphinDownloaderClass", "Search for Multimeter", 0, QApplication::UnicodeUTF8));
        downloadSelectBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Data Source", 0, QApplication::UnicodeUTF8));
        radioDownloadSave->setText(QApplication::translate("YellowDolphinDownloaderClass", "SAVE", 0, QApplication::UnicodeUTF8));
        radioDownloadLog->setText(QApplication::translate("YellowDolphinDownloaderClass", "LOG", 0, QApplication::UnicodeUTF8));
        radioUseBinFileDL->setText(QApplication::translate("YellowDolphinDownloaderClass", "Load from binary file", 0, QApplication::UnicodeUTF8));
        downloadOutputBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Select Output Format", 0, QApplication::UnicodeUTF8));
        radioDownload2Bin->setText(QApplication::translate("YellowDolphinDownloaderClass", "Binary Format", 0, QApplication::UnicodeUTF8));
        radioDownload2CSVF->setText(QApplication::translate("YellowDolphinDownloaderClass", "CSV (Full)", 0, QApplication::UnicodeUTF8));
        radioDownload2CSVR->setText(QApplication::translate("YellowDolphinDownloaderClass", "CSV (Reduced)", 0, QApplication::UnicodeUTF8));
        radioDownload2OO->setText(QApplication::translate("YellowDolphinDownloaderClass", "OpenOffice (Calc)", 0, QApplication::UnicodeUTF8));
        downloadButton->setText(QApplication::translate("YellowDolphinDownloaderClass", "Download", 0, QApplication::UnicodeUTF8));
        progressBar->setFormat(QApplication::translate("YellowDolphinDownloaderClass", "%p%", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_download), QApplication::translate("YellowDolphinDownloaderClass", "Download Data", 0, QApplication::UnicodeUTF8));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_remote), QApplication::translate("YellowDolphinDownloaderClass", "Remote Logging", 0, QApplication::UnicodeUTF8));
        refreshInterfacesBut->setText(QApplication::translate("YellowDolphinDownloaderClass", "Refresh Interfaces", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Multimeter Settings", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_settings), QApplication::translate("YellowDolphinDownloaderClass", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class YellowDolphinDownloaderClass: public Ui_YellowDolphinDownloaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YELLOWDOLPHINDOWNLOADER_H
