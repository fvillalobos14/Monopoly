/********************************************************************************
** Form generated from reading UI file 'opciones.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Opciones
{
public:
    QWidget *centralWidget;
    QLabel *fondo;
    QPushButton *quickGame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Opciones)
    {
        if (Opciones->objectName().isEmpty())
            Opciones->setObjectName(QStringLiteral("Opciones"));
        Opciones->resize(905, 664);
        centralWidget = new QWidget(Opciones);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fondo = new QLabel(centralWidget);
        fondo->setObjectName(QStringLiteral("fondo"));
        fondo->setGeometry(QRect(0, 0, 901, 631));
        fondo->setScaledContents(true);
        quickGame = new QPushButton(centralWidget);
        quickGame->setObjectName(QStringLiteral("quickGame"));
        quickGame->setGeometry(QRect(350, 310, 211, 23));
        QFont font;
        font.setFamily(QStringLiteral("Kabel"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        quickGame->setFont(font);
        Opciones->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Opciones);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 905, 21));
        Opciones->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Opciones);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Opciones->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Opciones);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Opciones->setStatusBar(statusBar);

        retranslateUi(Opciones);

        QMetaObject::connectSlotsByName(Opciones);
    } // setupUi

    void retranslateUi(QMainWindow *Opciones)
    {
        Opciones->setWindowTitle(QApplication::translate("Opciones", "Opciones", 0));
        fondo->setText(QString());
        quickGame->setText(QApplication::translate("Opciones", "Start Game", 0));
    } // retranslateUi

};

namespace Ui {
    class Opciones: public Ui_Opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCIONES_H
