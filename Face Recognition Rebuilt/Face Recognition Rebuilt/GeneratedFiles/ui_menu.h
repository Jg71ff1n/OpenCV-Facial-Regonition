/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *cmdFindProfile;
    QPushButton *cmdNewProfile;
    QPushButton *cmdEdit;
    QPushButton *cmdDelete;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(199, 210);
        cmdFindProfile = new QPushButton(Menu);
        cmdFindProfile->setObjectName(QStringLiteral("cmdFindProfile"));
        cmdFindProfile->setGeometry(QRect(60, 40, 75, 23));
        cmdNewProfile = new QPushButton(Menu);
        cmdNewProfile->setObjectName(QStringLiteral("cmdNewProfile"));
        cmdNewProfile->setGeometry(QRect(60, 80, 75, 23));
        cmdEdit = new QPushButton(Menu);
        cmdEdit->setObjectName(QStringLiteral("cmdEdit"));
        cmdEdit->setGeometry(QRect(60, 120, 75, 23));
        cmdDelete = new QPushButton(Menu);
        cmdDelete->setObjectName(QStringLiteral("cmdDelete"));
        cmdDelete->setGeometry(QRect(60, 160, 75, 23));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", Q_NULLPTR));
        cmdFindProfile->setText(QApplication::translate("Menu", "Find Profile", Q_NULLPTR));
        cmdNewProfile->setText(QApplication::translate("Menu", "New Profile", Q_NULLPTR));
        cmdEdit->setText(QApplication::translate("Menu", "Edit Profile", Q_NULLPTR));
        cmdDelete->setText(QApplication::translate("Menu", "Delete Profile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
