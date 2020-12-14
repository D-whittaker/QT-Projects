/********************************************************************************
** Form generated from reading UI file 'game_worm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WORM_H
#define UI_GAME_WORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_Worm
{
public:
    QLabel *Gwindow;
    QPushButton *NButton;
    QPushButton *EButton;
    QPushButton *SButton;
    QPushButton *WButton;
    QPushButton *QuitButton;
    QLabel *PScore;
    QLabel *PLose;

    void setupUi(QWidget *Game_Worm)
    {
        if (Game_Worm->objectName().isEmpty())
            Game_Worm->setObjectName(QStringLiteral("Game_Worm"));
        Game_Worm->resize(570, 300);
        QFont font;
        font.setFamily(QStringLiteral("Courier"));
        Game_Worm->setFont(font);
        Gwindow = new QLabel(Game_Worm);
        Gwindow->setObjectName(QStringLiteral("Gwindow"));
        Gwindow->setGeometry(QRect(40, 30, 301, 221));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier"));
        font1.setPointSize(13);
        Gwindow->setFont(font1);
        Gwindow->setFrameShape(QFrame::Box);
        Gwindow->setLineWidth(2);
        Gwindow->setTextFormat(Qt::PlainText);
        Gwindow->setTextInteractionFlags(Qt::NoTextInteraction);
        NButton = new QPushButton(Game_Worm);
        NButton->setObjectName(QStringLiteral("NButton"));
        NButton->setGeometry(QRect(450, 110, 41, 41));
        EButton = new QPushButton(Game_Worm);
        EButton->setObjectName(QStringLiteral("EButton"));
        EButton->setGeometry(QRect(490, 160, 41, 41));
        SButton = new QPushButton(Game_Worm);
        SButton->setObjectName(QStringLiteral("SButton"));
        SButton->setGeometry(QRect(450, 210, 41, 41));
        WButton = new QPushButton(Game_Worm);
        WButton->setObjectName(QStringLiteral("WButton"));
        WButton->setGeometry(QRect(410, 160, 41, 41));
        QuitButton = new QPushButton(Game_Worm);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));
        QuitButton->setGeometry(QRect(430, 260, 83, 25));
        PScore = new QLabel(Game_Worm);
        PScore->setObjectName(QStringLiteral("PScore"));
        PScore->setGeometry(QRect(350, 30, 71, 21));
        PScore->setFont(font1);
        PScore->setFrameShape(QFrame::NoFrame);
        PScore->setLineWidth(2);
        PScore->setTextFormat(Qt::PlainText);
        PScore->setTextInteractionFlags(Qt::NoTextInteraction);
        PLose = new QLabel(Game_Worm);
        PLose->setObjectName(QStringLiteral("PLose"));
        PLose->setGeometry(QRect(140, 250, 111, 21));
        PLose->setFont(font1);
        PLose->setFrameShape(QFrame::NoFrame);
        PLose->setLineWidth(2);
        PLose->setTextFormat(Qt::PlainText);
        PLose->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(Game_Worm);

        QMetaObject::connectSlotsByName(Game_Worm);
    } // setupUi

    void retranslateUi(QWidget *Game_Worm)
    {
        Game_Worm->setWindowTitle(QApplication::translate("Game_Worm", "Game_Worm", nullptr));
        Gwindow->setText(QString());
        NButton->setText(QApplication::translate("Game_Worm", "N", nullptr));
        EButton->setText(QApplication::translate("Game_Worm", "E", nullptr));
        SButton->setText(QApplication::translate("Game_Worm", "S", nullptr));
        WButton->setText(QApplication::translate("Game_Worm", "W", nullptr));
        QuitButton->setText(QApplication::translate("Game_Worm", "Quit", nullptr));
        PScore->setText(QString());
        PLose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game_Worm: public Ui_Game_Worm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WORM_H
