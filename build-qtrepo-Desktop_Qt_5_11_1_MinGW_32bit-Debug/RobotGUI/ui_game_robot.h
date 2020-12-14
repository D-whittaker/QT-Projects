/********************************************************************************
** Form generated from reading UI file 'game_robot.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_ROBOT_H
#define UI_GAME_ROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_Robot
{
public:
    QPushButton *NButton;
    QPushButton *WButton;
    QPushButton *EButton;
    QPushButton *SButton;
    QPushButton *ZButton;
    QPushButton *QuitButton;
    QLabel *Gwindow;
    QLabel *label;

    void setupUi(QWidget *Game_Robot)
    {
        if (Game_Robot->objectName().isEmpty())
            Game_Robot->setObjectName(QStringLiteral("Game_Robot"));
        Game_Robot->resize(700, 421);
        NButton = new QPushButton(Game_Robot);
        NButton->setObjectName(QStringLiteral("NButton"));
        NButton->setGeometry(QRect(530, 130, 41, 31));
        WButton = new QPushButton(Game_Robot);
        WButton->setObjectName(QStringLiteral("WButton"));
        WButton->setGeometry(QRect(460, 180, 41, 31));
        EButton = new QPushButton(Game_Robot);
        EButton->setObjectName(QStringLiteral("EButton"));
        EButton->setGeometry(QRect(600, 180, 41, 31));
        SButton = new QPushButton(Game_Robot);
        SButton->setObjectName(QStringLiteral("SButton"));
        SButton->setGeometry(QRect(530, 230, 41, 31));
        ZButton = new QPushButton(Game_Robot);
        ZButton->setObjectName(QStringLiteral("ZButton"));
        ZButton->setGeometry(QRect(510, 170, 81, 51));
        QuitButton = new QPushButton(Game_Robot);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));
        QuitButton->setGeometry(QRect(510, 290, 80, 24));
        Gwindow = new QLabel(Game_Robot);
        Gwindow->setObjectName(QStringLiteral("Gwindow"));
        Gwindow->setGeometry(QRect(90, 110, 241, 191));
        QFont font;
        font.setFamily(QStringLiteral("Courier"));
        Gwindow->setFont(font);
        Gwindow->setFrameShape(QFrame::Box);
        label = new QLabel(Game_Robot);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 320, 121, 31));

        retranslateUi(Game_Robot);

        QMetaObject::connectSlotsByName(Game_Robot);
    } // setupUi

    void retranslateUi(QWidget *Game_Robot)
    {
        Game_Robot->setWindowTitle(QApplication::translate("Game_Robot", "Game_Robot", nullptr));
        NButton->setText(QApplication::translate("Game_Robot", "N", nullptr));
        WButton->setText(QApplication::translate("Game_Robot", "W", nullptr));
        EButton->setText(QApplication::translate("Game_Robot", "E", nullptr));
        SButton->setText(QApplication::translate("Game_Robot", "S", nullptr));
        ZButton->setText(QApplication::translate("Game_Robot", "Random", nullptr));
        QuitButton->setText(QApplication::translate("Game_Robot", "Quit", nullptr));
        Gwindow->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game_Robot: public Ui_Game_Robot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_ROBOT_H
