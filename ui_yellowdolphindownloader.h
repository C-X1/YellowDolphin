/********************************************************************************
** Form generated from reading UI file 'yellowdolphindownloader.ui'
**
** Created: Thu Sep 2 21:54:10 2010
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
    QVBoxLayout *verticalLayout_VP;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_remoteLogCommands;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_remlog_query;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_SaveData;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ResetPri;
    QPushButton *pushButton_resetSec;
    QGroupBox *groupBox_pri;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_24;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_priValue;
    QLabel *label_priMax;
    QLabel *label_priMin;
    QLabel *label_priAverage;
    QGroupBox *groupBox_sec;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_secValue;
    QLabel *label_secMax;
    QLabel *label_secMin;
    QLabel *label_secAverage;
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
        verticalLayout_VP = new QVBoxLayout();
        verticalLayout_VP->setSpacing(6);
        verticalLayout_VP->setObjectName(QString::fromUtf8("verticalLayout_VP"));

        verticalLayout_7->addLayout(verticalLayout_VP);

        groupBox = new QGroupBox(tab_remote);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        groupBox_remoteLogCommands = new QGroupBox(groupBox);
        groupBox_remoteLogCommands->setObjectName(QString::fromUtf8("groupBox_remoteLogCommands"));
        verticalLayout_5 = new QVBoxLayout(groupBox_remoteLogCommands);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_remlog_query = new QPushButton(groupBox_remoteLogCommands);
        pushButton_remlog_query->setObjectName(QString::fromUtf8("pushButton_remlog_query"));

        verticalLayout_5->addWidget(pushButton_remlog_query);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_SaveData = new QPushButton(groupBox_remoteLogCommands);
        pushButton_SaveData->setObjectName(QString::fromUtf8("pushButton_SaveData"));

        horizontalLayout_8->addWidget(pushButton_SaveData);

        pushButton_3 = new QPushButton(groupBox_remoteLogCommands);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_8->addWidget(pushButton_3);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_ResetPri = new QPushButton(groupBox_remoteLogCommands);
        pushButton_ResetPri->setObjectName(QString::fromUtf8("pushButton_ResetPri"));

        horizontalLayout_4->addWidget(pushButton_ResetPri);

        pushButton_resetSec = new QPushButton(groupBox_remoteLogCommands);
        pushButton_resetSec->setObjectName(QString::fromUtf8("pushButton_resetSec"));

        horizontalLayout_4->addWidget(pushButton_resetSec);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout_6->addWidget(groupBox_remoteLogCommands);

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
        label_priValue = new QLabel(groupBox_pri);
        label_priValue->setObjectName(QString::fromUtf8("label_priValue"));
        sizePolicy.setHeightForWidth(label_priValue->sizePolicy().hasHeightForWidth());
        label_priValue->setSizePolicy(sizePolicy);
        label_priValue->setMinimumSize(QSize(99, 14));
        label_priValue->setMaximumSize(QSize(99, 14));
        label_priValue->setBaseSize(QSize(28, 0));
        QFont font;
        font.setPointSize(9);
        label_priValue->setFont(font);
        label_priValue->setTextFormat(Qt::PlainText);
        label_priValue->setScaledContents(false);
        label_priValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_priValue->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(label_priValue);

        label_priMax = new QLabel(groupBox_pri);
        label_priMax->setObjectName(QString::fromUtf8("label_priMax"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(99);
        sizePolicy1.setVerticalStretch(14);
        sizePolicy1.setHeightForWidth(label_priMax->sizePolicy().hasHeightForWidth());
        label_priMax->setSizePolicy(sizePolicy1);
        label_priMax->setMinimumSize(QSize(99, 14));
        label_priMax->setMaximumSize(QSize(99, 14));
        label_priMax->setFont(font);
        label_priMax->setTextFormat(Qt::PlainText);
        label_priMax->setScaledContents(false);
        label_priMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_priMax->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(label_priMax);

        label_priMin = new QLabel(groupBox_pri);
        label_priMin->setObjectName(QString::fromUtf8("label_priMin"));
        sizePolicy1.setHeightForWidth(label_priMin->sizePolicy().hasHeightForWidth());
        label_priMin->setSizePolicy(sizePolicy1);
        label_priMin->setMinimumSize(QSize(99, 14));
        label_priMin->setMaximumSize(QSize(99, 14));
        label_priMin->setFont(font);
        label_priMin->setTextFormat(Qt::PlainText);
        label_priMin->setScaledContents(false);
        label_priMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_priMin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(label_priMin);

        label_priAverage = new QLabel(groupBox_pri);
        label_priAverage->setObjectName(QString::fromUtf8("label_priAverage"));
        sizePolicy1.setHeightForWidth(label_priAverage->sizePolicy().hasHeightForWidth());
        label_priAverage->setSizePolicy(sizePolicy1);
        label_priAverage->setMinimumSize(QSize(99, 14));
        label_priAverage->setMaximumSize(QSize(99, 14));
        label_priAverage->setFont(font);
        label_priAverage->setTextFormat(Qt::PlainText);
        label_priAverage->setScaledContents(false);
        label_priAverage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_priAverage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(label_priAverage);


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
        label_secValue = new QLabel(groupBox_sec);
        label_secValue->setObjectName(QString::fromUtf8("label_secValue"));
        sizePolicy1.setHeightForWidth(label_secValue->sizePolicy().hasHeightForWidth());
        label_secValue->setSizePolicy(sizePolicy1);
        label_secValue->setMinimumSize(QSize(99, 14));
        label_secValue->setMaximumSize(QSize(99, 14));
        label_secValue->setBaseSize(QSize(28, 0));
        label_secValue->setFont(font);
        label_secValue->setTextFormat(Qt::PlainText);
        label_secValue->setScaledContents(false);
        label_secValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_secValue->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_16->addWidget(label_secValue);

        label_secMax = new QLabel(groupBox_sec);
        label_secMax->setObjectName(QString::fromUtf8("label_secMax"));
        sizePolicy1.setHeightForWidth(label_secMax->sizePolicy().hasHeightForWidth());
        label_secMax->setSizePolicy(sizePolicy1);
        label_secMax->setMinimumSize(QSize(99, 14));
        label_secMax->setMaximumSize(QSize(99, 14));
        label_secMax->setFont(font);
        label_secMax->setTextFormat(Qt::PlainText);
        label_secMax->setScaledContents(false);
        label_secMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_secMax->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_16->addWidget(label_secMax);

        label_secMin = new QLabel(groupBox_sec);
        label_secMin->setObjectName(QString::fromUtf8("label_secMin"));
        sizePolicy1.setHeightForWidth(label_secMin->sizePolicy().hasHeightForWidth());
        label_secMin->setSizePolicy(sizePolicy1);
        label_secMin->setMinimumSize(QSize(99, 14));
        label_secMin->setMaximumSize(QSize(99, 14));
        label_secMin->setFont(font);
        label_secMin->setTextFormat(Qt::PlainText);
        label_secMin->setScaledContents(false);
        label_secMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_secMin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_16->addWidget(label_secMin);

        label_secAverage = new QLabel(groupBox_sec);
        label_secAverage->setObjectName(QString::fromUtf8("label_secAverage"));
        sizePolicy1.setHeightForWidth(label_secAverage->sizePolicy().hasHeightForWidth());
        label_secAverage->setSizePolicy(sizePolicy1);
        label_secAverage->setMinimumSize(QSize(99, 14));
        label_secAverage->setMaximumSize(QSize(99, 14));
        label_secAverage->setFont(font);
        label_secAverage->setTextFormat(Qt::PlainText);
        label_secAverage->setScaledContents(false);
        label_secAverage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_secAverage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_16->addWidget(label_secAverage);


        horizontalLayout_5->addLayout(verticalLayout_16);


        horizontalLayout_6->addWidget(groupBox_sec);


        verticalLayout_9->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(groupBox);

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
        groupBox->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Current Values", 0, QApplication::UnicodeUTF8));
        groupBox_remoteLogCommands->setTitle(QString());
        pushButton_remlog_query->setText(QApplication::translate("YellowDolphinDownloaderClass", "Start Logging", 0, QApplication::UnicodeUTF8));
        pushButton_SaveData->setText(QApplication::translate("YellowDolphinDownloaderClass", "Save Log-Data", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("YellowDolphinDownloaderClass", "Save Current", 0, QApplication::UnicodeUTF8));
        pushButton_ResetPri->setText(QApplication::translate("YellowDolphinDownloaderClass", "Reset Primary", 0, QApplication::UnicodeUTF8));
        pushButton_resetSec->setText(QApplication::translate("YellowDolphinDownloaderClass", "Reset Secondary", 0, QApplication::UnicodeUTF8));
        groupBox_pri->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Primary", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("YellowDolphinDownloaderClass", "Value", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("YellowDolphinDownloaderClass", "Maximum", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("YellowDolphinDownloaderClass", "Minimum", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("YellowDolphinDownloaderClass", "Average", 0, QApplication::UnicodeUTF8));
        label_priValue->setText(QString());
        label_priMax->setText(QString());
        label_priMin->setText(QString());
        label_priAverage->setText(QString());
        groupBox_sec->setTitle(QApplication::translate("YellowDolphinDownloaderClass", "Secondary", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("YellowDolphinDownloaderClass", "Value", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("YellowDolphinDownloaderClass", "Maximum", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("YellowDolphinDownloaderClass", "Minimum", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("YellowDolphinDownloaderClass", "Average", 0, QApplication::UnicodeUTF8));
        label_secValue->setText(QString());
        label_secMax->setText(QString());
        label_secMin->setText(QString());
        label_secAverage->setText(QString());
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
