/********************************************************************************
** Form generated from reading UI file 'tetrahedron_animation.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETRAHEDRON_ANIMATION_H
#define UI_TETRAHEDRON_ANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tetrahedron_Animation
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tetrahedron_Animation)
    {
        if (Tetrahedron_Animation->objectName().isEmpty())
            Tetrahedron_Animation->setObjectName(QString::fromUtf8("Tetrahedron_Animation"));
        Tetrahedron_Animation->resize(800, 600);
        centralwidget = new QWidget(Tetrahedron_Animation);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Tetrahedron_Animation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tetrahedron_Animation);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Tetrahedron_Animation->setMenuBar(menubar);
        statusbar = new QStatusBar(Tetrahedron_Animation);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Tetrahedron_Animation->setStatusBar(statusbar);

        retranslateUi(Tetrahedron_Animation);

        QMetaObject::connectSlotsByName(Tetrahedron_Animation);
    } // setupUi

    void retranslateUi(QMainWindow *Tetrahedron_Animation)
    {
        Tetrahedron_Animation->setWindowTitle(QCoreApplication::translate("Tetrahedron_Animation", "Tetrahedron_Animation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tetrahedron_Animation: public Ui_Tetrahedron_Animation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETRAHEDRON_ANIMATION_H
