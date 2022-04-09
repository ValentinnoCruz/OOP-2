/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "my_gl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    MyGL *openGLWidget;
    QLabel *rotate_z_label;
    QLabel *rotate_y_label;
    QLabel *rotate_x_label;
    QSlider *x_rot_slider;
    QSlider *y_rot_slider;
    QSlider *z_rot_slider;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(1);
        openGLWidget = new MyGL(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(openGLWidget, 0, 0, 1, 3);

        rotate_z_label = new QLabel(centralWidget);
        rotate_z_label->setObjectName(QString::fromUtf8("rotate_z_label"));

        gridLayout_2->addWidget(rotate_z_label, 4, 0, 1, 1);

        rotate_y_label = new QLabel(centralWidget);
        rotate_y_label->setObjectName(QString::fromUtf8("rotate_y_label"));

        gridLayout_2->addWidget(rotate_y_label, 3, 0, 1, 1);

        rotate_x_label = new QLabel(centralWidget);
        rotate_x_label->setObjectName(QString::fromUtf8("rotate_x_label"));

        gridLayout_2->addWidget(rotate_x_label, 1, 0, 1, 1);

        x_rot_slider = new QSlider(centralWidget);
        x_rot_slider->setObjectName(QString::fromUtf8("x_rot_slider"));
        x_rot_slider->setMinimum(0);
        x_rot_slider->setMaximum(360);
        x_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(x_rot_slider, 1, 2, 1, 1);

        y_rot_slider = new QSlider(centralWidget);
        y_rot_slider->setObjectName(QString::fromUtf8("y_rot_slider"));
        y_rot_slider->setMinimum(0);
        y_rot_slider->setMaximum(360);
        y_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(y_rot_slider, 3, 2, 1, 1);

        z_rot_slider = new QSlider(centralWidget);
        z_rot_slider->setObjectName(QString::fromUtf8("z_rot_slider"));
        z_rot_slider->setMinimum(0);
        z_rot_slider->setMaximum(360);
        z_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(z_rot_slider, 4, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Begin OpenGL", nullptr));
        rotate_z_label->setText(QCoreApplication::translate("MainWindow", "Rotate Z:", nullptr));
        rotate_y_label->setText(QCoreApplication::translate("MainWindow", "Rotate Y:", nullptr));
        rotate_x_label->setText(QCoreApplication::translate("MainWindow", "Rotate X:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
