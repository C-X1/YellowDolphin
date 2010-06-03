/********************************************************************************
** Form generated from reading UI file 'yellowdolphindownloader.ui'
**
** Created: Thu Jun 3 01:08:37 2010
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
    QVBoxLayout *verticalLayout_7;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *outputBox_2;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *LogCheckBox;
    QPushButton *pushButton_remlog_query;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_pri;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_24;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_10;
    QLabel *priValue;
    QLabel *priMax;
    QLabel *priMin;
    QLabel *priAverage;
    QGroupBox *groupBox_sec;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_16;
    QLabel *priValue_2;
    QLabel *priMax_2;
    QLabel *priMin_2;
    QLabel *priAverage_2;
    QWidget *tab_settings;
    QVBoxLayout *verticalLayout_8;
    QPushButton *refreshInterfacesBut;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *YellowDolphinDownloaderClass)
    {
        if (YellowDolphinDownloaderClass->objectName().isEmpty())
            YellowDolphinDownloaderClass->setObjectName(QString::fromUtf8("YellowDolphinDownloaderClass"));
        YellowDolphinDownloaderClass->resize(700, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(YellowDolphinDownloaderClass->sizePolicy().hasHeightForWidth());
        YellowDolphinDownloaderClass->setSizePolicy(sizePolicy);
        YellowDolphinDownloaderClass->setMaximumSize(QSize(10000, 10000));
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
        verticalLayout_7 = new QVBoxLayout(tab_remote);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        graphicsView = new QGraphicsView(tab_remote);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_7->addWidget(graphicsView);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        outputBox_2 = new QGroupBox(tab_remote);
        outputBox_2->setObjectName(QString::fromUtf8("outputBox_2"));
        outputBox_2->setMinimumSize(QSize(200, 200));
        outputBox_2->setMaximumSize(QSize(200, 300));
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

        pushButton_remlog_query = new QPushButton(outputBox_2);
        pushButton_remlog_query->setObjectName(QString::fromUtf8("pushButton_remlog_query"));

        horizontalLayout_4->addWidget(pushButton_remlog_query);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout_7->addWidget(outputBox_2);

        groupBox = new QGroupBox(tab_remote);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        groupBox_pri = new QGroupBox(groupBox);
        groupBox_pri->setObjectName(QString::fromUtf8("groupBox_pri"));
        sizePolicy.setHeightForWidth(groupBox_pri->sizePolicy().hasHeightForWidth());
        groupBox_pri->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(groupBox_pri);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_23 = new QLabel(groupBox_pri);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_14->addWidget(label_23);

        label_25 = new QLabel(groupBox_pri);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_14->addWidget(label_25);

        label_24 = new QLabel(groupBox_pri);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_14->addWidget(label_24);

        label_26 = new QLabel(groupBox_pri);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_14->addWidget(label_26);


        horizontalLayout_3->addLayout(verticalLayout_14);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        priValue = new QLabel(groupBox_pri);
        priValue->setObjectName(QString::fromUtf8("priValue"));
        priValue->setMinimumSize(QSize(30, 0));
        priValue->setBaseSize(QSize(28, 0));

        verticalLayout_10->addWidget(priValue);

        priMax = new QLabel(groupBox_pri);
        priMax->setObjectName(QString::fromUtf8("priMax"));

        verticalLayout_10->addWidget(priMax);

        priMin = new QLabel(groupBox_pri);
        priMin->setObjectName(QString::fromUtf8("priMin"));

        verticalLayout_10->addWidget(priMin);

        priAverage = new QLabel(groupBox_pri);
        priAverage->setObjectName(QString::fromUtf8("priAverage"));

        verticalLayout_10->addWidget(priAverage);


        horizontalLayout_3->addLayout(verticalLayout_10);


        horizontalLayout_6->addWidget(groupBox_pri);

        groupBox_sec = new QGroupBox(groupBox);
        groupBox_sec->setObjectName(QString::fromUtf8("groupBox_sec"));
        sizePolicy.setHeightForWidth(groupBox_sec->sizePolicy().hasHeightForWidth());
        groupBox_sec->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(groupBox_sec);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_27 = new QLabel(groupBox_sec);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_15->addWidget(label_27);

        label_28 = new QLabel(groupBox_sec);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_15->addWidget(label_28);

        label_29 = new QLabel(groupBox_sec);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_15->addWidget(label_29);

        label_30 = new QLabel(groupBox_sec);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_15->addWidget(label_30);


        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        priValue_2 = new QLabel(groupBox_sec);
        priValue_2->setObjectName(QString::fromUtf8("priValue_2"));
        priValue_2->setMinimumSize(QSize(30, 0));
        priValue_2->setBaseSize(QSize(28, 0));

        verticalLayout_16->addWidget(priValue_2);

        priMax_2 = new QLabel(groupBox_sec);
        priMax_2->setObjectName(QString::fromUtf8("priMax_2"));

        verticalLayout_16->addWidget(priMax_2);

        priMin_2 = new QLabel(groupBox_sec);
        priMin_2->setObjectName(QString::fromUtf8("priMin_2"));

        verticalLayout_16->addWidget(priMin_2);

        priAverage_2 = new QLabel(groupBox_sec);
        priAverage_2->setObjectName(QString::fromUtf8("priAverage_2"));

        verticalLayout_16->addWidget(priAverage_2);


        horizontalLayout_5->addLayout(verticalLayout_16);


        horizontalLayout_6->addWidget(groupBox_sec);


        verticalLayout_9->addLayout(horizontalLayout_6);


        horizontalLayout_7->addWidget(groupBox);


        verticalLayout_7->addLayout(horizontalLayout_7);

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
        QWidget::setTabOrder(downloadButton, graphicsView);

        retranslateUi(YellowDolphinDownloaderClass);

        tabWidget->setCurrentIndex(0);


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
        pushButton_remlog_query->setText(QApplication::translate("YellowDolphinDownloaderClass", "Start Querying", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Current Values", 0, QApplication::UnicodeUTF8));
        groupBox_pri->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Primary", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("YellowDolphinDownloaderClass", "Value", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("YellowDolphinDownloaderClass", "Maximum", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("YellowDolphinDownloaderClass", "Minimum", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("YellowDolphinDownloaderClass", "Average", 0, QApplication::UnicodeUTF8));
        priValue->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        priMax->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        priMin->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        priAverage->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        groupBox_sec->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Secondary", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("YellowDolphinDownloaderClass", "Value", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("YellowDolphinDownloaderClass", "Maximum", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("YellowDolphinDownloaderClass", "Minimum", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("YellowDolphinDownloaderClass", "Average", 0, QApplication::UnicodeUTF8));
        priValue_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        priMax_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        priMin_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
        priAverage_2->setText(QApplication::translate("YellowDolphinDownloaderClass", "###########", 0, QApplication::UnicodeUTF8));
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
