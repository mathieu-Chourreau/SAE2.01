/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionquitter;
    QAction *actionvitesse_de_defilement;
    QAction *actionEnlever_diaporama;
    QAction *actionCharger_diaporama;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *lTitreDiapo;
    QLabel *lValeurTitreDiapo;
    QLabel *lTitreImage;
    QLabel *lValeurTitreImage;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lCategorie;
    QLabel *lValeurCategorie;
    QPushButton *bChangerCategorie;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *lImage;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lRang;
    QLabel *lValeurRangActuel;
    QLabel *lRangSeparateur;
    QLabel *lValeurRangMax;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *bReculerDiapo;
    QPushButton *bAvancerDiapo;
    QPushButton *bLancerDiapo;
    QPushButton *bArreterDiapo;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuParametre;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(573, 391);
        actionquitter = new QAction(LecteurVue);
        actionquitter->setObjectName(QString::fromUtf8("actionquitter"));
        actionvitesse_de_defilement = new QAction(LecteurVue);
        actionvitesse_de_defilement->setObjectName(QString::fromUtf8("actionvitesse_de_defilement"));
        actionEnlever_diaporama = new QAction(LecteurVue);
        actionEnlever_diaporama->setObjectName(QString::fromUtf8("actionEnlever_diaporama"));
        actionCharger_diaporama = new QAction(LecteurVue);
        actionCharger_diaporama->setObjectName(QString::fromUtf8("actionCharger_diaporama"));
        actionA_propos_de = new QAction(LecteurVue);
        actionA_propos_de->setObjectName(QString::fromUtf8("actionA_propos_de"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lTitreDiapo = new QLabel(centralwidget);
        lTitreDiapo->setObjectName(QString::fromUtf8("lTitreDiapo"));

        gridLayout->addWidget(lTitreDiapo, 0, 0, 1, 1);

        lValeurTitreDiapo = new QLabel(centralwidget);
        lValeurTitreDiapo->setObjectName(QString::fromUtf8("lValeurTitreDiapo"));

        gridLayout->addWidget(lValeurTitreDiapo, 0, 1, 1, 1);

        lTitreImage = new QLabel(centralwidget);
        lTitreImage->setObjectName(QString::fromUtf8("lTitreImage"));

        gridLayout->addWidget(lTitreImage, 1, 0, 1, 1);

        lValeurTitreImage = new QLabel(centralwidget);
        lValeurTitreImage->setObjectName(QString::fromUtf8("lValeurTitreImage"));

        gridLayout->addWidget(lValeurTitreImage, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lCategorie = new QLabel(centralwidget);
        lCategorie->setObjectName(QString::fromUtf8("lCategorie"));

        horizontalLayout_5->addWidget(lCategorie);

        lValeurCategorie = new QLabel(centralwidget);
        lValeurCategorie->setObjectName(QString::fromUtf8("lValeurCategorie"));

        horizontalLayout_5->addWidget(lValeurCategorie);


        verticalLayout_2->addLayout(horizontalLayout_5);

        bChangerCategorie = new QPushButton(centralwidget);
        bChangerCategorie->setObjectName(QString::fromUtf8("bChangerCategorie"));

        verticalLayout_2->addWidget(bChangerCategorie);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        lImage = new QLabel(centralwidget);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        lImage->setEnabled(true);
        lImage->setMinimumSize(QSize(128, 128));
        lImage->setMaximumSize(QSize(128, 128));
        lImage->setPixmap(QPixmap(QString::fromUtf8("../../cartesDisney/Disney_0.gif")));
        lImage->setScaledContents(true);

        verticalLayout->addWidget(lImage);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        lRang = new QLabel(centralwidget);
        lRang->setObjectName(QString::fromUtf8("lRang"));

        horizontalLayout_3->addWidget(lRang);

        lValeurRangActuel = new QLabel(centralwidget);
        lValeurRangActuel->setObjectName(QString::fromUtf8("lValeurRangActuel"));

        horizontalLayout_3->addWidget(lValeurRangActuel);

        lRangSeparateur = new QLabel(centralwidget);
        lRangSeparateur->setObjectName(QString::fromUtf8("lRangSeparateur"));

        horizontalLayout_3->addWidget(lRangSeparateur);

        lValeurRangMax = new QLabel(centralwidget);
        lValeurRangMax->setObjectName(QString::fromUtf8("lValeurRangMax"));

        horizontalLayout_3->addWidget(lValeurRangMax);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bReculerDiapo = new QPushButton(centralwidget);
        bReculerDiapo->setObjectName(QString::fromUtf8("bReculerDiapo"));

        horizontalLayout->addWidget(bReculerDiapo);

        bAvancerDiapo = new QPushButton(centralwidget);
        bAvancerDiapo->setObjectName(QString::fromUtf8("bAvancerDiapo"));

        horizontalLayout->addWidget(bAvancerDiapo);

        bLancerDiapo = new QPushButton(centralwidget);
        bLancerDiapo->setObjectName(QString::fromUtf8("bLancerDiapo"));

        horizontalLayout->addWidget(bLancerDiapo);

        bArreterDiapo = new QPushButton(centralwidget);
        bArreterDiapo->setObjectName(QString::fromUtf8("bArreterDiapo"));

        horizontalLayout->addWidget(bArreterDiapo);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 573, 22));
        menuParametre = new QMenu(menubar);
        menuParametre->setObjectName(QString::fromUtf8("menuParametre"));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParametre->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParametre->addAction(actionvitesse_de_defilement);
        menuParametre->addAction(actionEnlever_diaporama);
        menuParametre->addAction(actionCharger_diaporama);
        menuFichier->addAction(actionquitter);
        menuAide->addAction(actionA_propos_de);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        actionquitter->setText(QCoreApplication::translate("LecteurVue", "quitter", nullptr));
        actionvitesse_de_defilement->setText(QCoreApplication::translate("LecteurVue", "Vitesse de defilement", nullptr));
        actionEnlever_diaporama->setText(QCoreApplication::translate("LecteurVue", "Enlever diaporama", nullptr));
        actionCharger_diaporama->setText(QCoreApplication::translate("LecteurVue", "Charger diaporama", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("LecteurVue", "A propos de ", nullptr));
        lTitreDiapo->setText(QCoreApplication::translate("LecteurVue", "Titre diapo : ", nullptr));
        lValeurTitreDiapo->setText(QCoreApplication::translate("LecteurVue", "...", nullptr));
        lTitreImage->setText(QCoreApplication::translate("LecteurVue", "Titre image :", nullptr));
        lValeurTitreImage->setText(QCoreApplication::translate("LecteurVue", "...", nullptr));
        lCategorie->setText(QCoreApplication::translate("LecteurVue", "Categorie de l'image :", nullptr));
        lValeurCategorie->setText(QCoreApplication::translate("LecteurVue", "...", nullptr));
        bChangerCategorie->setText(QCoreApplication::translate("LecteurVue", "Changer Cat\303\251gorie", nullptr));
        lImage->setText(QString());
        lRang->setText(QCoreApplication::translate("LecteurVue", "Rang :", nullptr));
        lValeurRangActuel->setText(QCoreApplication::translate("LecteurVue", "...", nullptr));
        lRangSeparateur->setText(QCoreApplication::translate("LecteurVue", "/", nullptr));
        lValeurRangMax->setText(QCoreApplication::translate("LecteurVue", "...", nullptr));
        bReculerDiapo->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bAvancerDiapo->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        bLancerDiapo->setText(QCoreApplication::translate("LecteurVue", "Lancer Diaporama", nullptr));
        bArreterDiapo->setText(QCoreApplication::translate("LecteurVue", "Arreter Diaporama", nullptr));
        menuParametre->setTitle(QCoreApplication::translate("LecteurVue", "Parametre", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
