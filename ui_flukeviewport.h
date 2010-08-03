/********************************************************************************
** Form generated from reading UI file 'flukeviewport.ui'
**
** Created: Tue Aug 3 18:17:24 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLUKEVIEWPORT_H
#define UI_FLUKEVIEWPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlukeViewPortClass
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *FlukeViewPortClass)
    {
        if (FlukeViewPortClass->objectName().isEmpty())
            FlukeViewPortClass->setObjectName(QString::fromUtf8("FlukeViewPortClass"));
        FlukeViewPortClass->resize(400, 300);
        gridLayout = new QGridLayout(FlukeViewPortClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(FlukeViewPortClass);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);


        retranslateUi(FlukeViewPortClass);

        QMetaObject::connectSlotsByName(FlukeViewPortClass);
    } // setupUi

    void retranslateUi(QWidget *FlukeViewPortClass)
    {
        FlukeViewPortClass->setWindowTitle(QApplication::translate("FlukeViewPortClass", "FlukeViewPort", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FlukeViewPortClass: public Ui_FlukeViewPortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLUKEVIEWPORT_H
