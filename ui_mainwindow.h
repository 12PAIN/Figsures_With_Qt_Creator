/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <glfigureswidget.h>
#include <glprismswidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionmoveUp;
    QAction *actionmoveDown;
    QAction *actionmoveLeft;
    QAction *actionmoveRight;
    QAction *actionlistButtonClicked;
    QWidget *centralWidget;
    QWidget *createFigureWidget;
    QLabel *labelDataError;
    QWidget *widgetFigsCreating;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *figuresButtonLayout;
    QWidget *widgetPropsCreate;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *propertiesCreateLayout;
    QWidget *bottomWidget;
    QPushButton *pushButton;
    QLineEdit *prismHeightLabel;
    QLabel *label_18;
    QPushButton *pushButtonPrevFig;
    QPushButton *makePrismButton;
    QPushButton *scalePlusButton;
    QPushButton *scaleMinusButton;
    QPushButton *pushButtonDelFigure;
    QPushButton *figuresPrismsSwitcher;
    QLabel *label;
    QLineEdit *dataStrLabel;
    QPushButton *createFigureButton;
    QWidget *prismCreateWidget;
    QLabel *label_5;
    QLineEdit *prismHeightInput;
    QPushButton *createPrism;
    QLabel *labelPrismDataError;
    QWidget *widgetFigureCalcs;
    QLabel *label_6;
    QLineEdit *figureSpace;
    QLineEdit *figurePerimeter;
    QLabel *label_7;
    QWidget *prismCalcs;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *labelPrismBaseSpace;
    QLineEdit *labelPrismVolume;
    QLineEdit *labelPrismSpace;
    QPushButton *moveUp;
    QPushButton *moveDown;
    QPushButton *moveLeft;
    QPushButton *moveRight;
    GLPrismsWidget *prismsWidget;
    QPushButton *rotateLeft;
    QPushButton *rotateRight;
    QPushButton *rotateUp;
    QPushButton *rotateDown;
    QLabel *rotateLabel;
    QLabel *moveLabel;
    QPushButton *heightMinus;
    QPushButton *heightPlus;
    GLFiguresWidget *figuresGlWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 500);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setMaximumSize(QSize(500, 500));
        MainWindow->setMouseTracking(false);
        actionmoveUp = new QAction(MainWindow);
        actionmoveUp->setObjectName(QStringLiteral("actionmoveUp"));
        actionmoveUp->setCheckable(true);
        actionmoveDown = new QAction(MainWindow);
        actionmoveDown->setObjectName(QStringLiteral("actionmoveDown"));
        actionmoveDown->setCheckable(true);
        actionmoveLeft = new QAction(MainWindow);
        actionmoveLeft->setObjectName(QStringLiteral("actionmoveLeft"));
        actionmoveLeft->setCheckable(true);
        actionmoveRight = new QAction(MainWindow);
        actionmoveRight->setObjectName(QStringLiteral("actionmoveRight"));
        actionmoveRight->setCheckable(true);
        actionlistButtonClicked = new QAction(MainWindow);
        actionlistButtonClicked->setObjectName(QStringLiteral("actionlistButtonClicked"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        createFigureWidget = new QWidget(centralWidget);
        createFigureWidget->setObjectName(QStringLiteral("createFigureWidget"));
        createFigureWidget->setGeometry(QRect(350, 0, 151, 301));
        createFigureWidget->setAutoFillBackground(false);
        createFigureWidget->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        labelDataError = new QLabel(createFigureWidget);
        labelDataError->setObjectName(QStringLiteral("labelDataError"));
        labelDataError->setGeometry(QRect(60, 40, 51, 16));
        widgetFigsCreating = new QWidget(createFigureWidget);
        widgetFigsCreating->setObjectName(QStringLiteral("widgetFigsCreating"));
        widgetFigsCreating->setGeometry(QRect(10, 60, 131, 221));
        verticalLayoutWidget = new QWidget(widgetFigsCreating);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 131, 211));
        figuresButtonLayout = new QVBoxLayout(verticalLayoutWidget);
        figuresButtonLayout->setSpacing(6);
        figuresButtonLayout->setContentsMargins(11, 11, 11, 11);
        figuresButtonLayout->setObjectName(QStringLiteral("figuresButtonLayout"));
        figuresButtonLayout->setContentsMargins(0, 0, 0, 0);
        widgetPropsCreate = new QWidget(createFigureWidget);
        widgetPropsCreate->setObjectName(QStringLiteral("widgetPropsCreate"));
        widgetPropsCreate->setGeometry(QRect(10, 60, 131, 221));
        verticalLayoutWidget_2 = new QWidget(widgetPropsCreate);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 131, 221));
        propertiesCreateLayout = new QVBoxLayout(verticalLayoutWidget_2);
        propertiesCreateLayout->setSpacing(6);
        propertiesCreateLayout->setContentsMargins(11, 11, 11, 11);
        propertiesCreateLayout->setObjectName(QStringLiteral("propertiesCreateLayout"));
        propertiesCreateLayout->setContentsMargins(0, 0, 0, 0);
        labelDataError->raise();
        widgetFigsCreating->raise();
        widgetPropsCreate->raise();
        bottomWidget = new QWidget(centralWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setGeometry(QRect(-10, 460, 521, 51));
        bottomWidget->setAutoFillBackground(false);
        bottomWidget->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        pushButton = new QPushButton(bottomWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 20, 75, 23));
        pushButton->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        prismHeightLabel = new QLineEdit(bottomWidget);
        prismHeightLabel->setObjectName(QStringLiteral("prismHeightLabel"));
        prismHeightLabel->setEnabled(false);
        prismHeightLabel->setGeometry(QRect(220, 0, 71, 20));
        label_18 = new QLabel(bottomWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 0, 101, 20));
        pushButtonPrevFig = new QPushButton(bottomWidget);
        pushButtonPrevFig->setObjectName(QStringLiteral("pushButtonPrevFig"));
        pushButtonPrevFig->setGeometry(QRect(370, 20, 75, 23));
        pushButtonPrevFig->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        makePrismButton = new QPushButton(bottomWidget);
        makePrismButton->setObjectName(QStringLiteral("makePrismButton"));
        makePrismButton->setGeometry(QRect(370, 0, 141, 21));
        makePrismButton->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        scalePlusButton = new QPushButton(bottomWidget);
        scalePlusButton->setObjectName(QStringLiteral("scalePlusButton"));
        scalePlusButton->setGeometry(QRect(350, 0, 20, 21));
        scalePlusButton->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        scaleMinusButton = new QPushButton(bottomWidget);
        scaleMinusButton->setObjectName(QStringLiteral("scaleMinusButton"));
        scaleMinusButton->setGeometry(QRect(350, 20, 20, 21));
        scaleMinusButton->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        pushButtonDelFigure = new QPushButton(bottomWidget);
        pushButtonDelFigure->setObjectName(QStringLiteral("pushButtonDelFigure"));
        pushButtonDelFigure->setGeometry(QRect(290, 20, 61, 21));
        pushButtonDelFigure->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        figuresPrismsSwitcher = new QPushButton(bottomWidget);
        figuresPrismsSwitcher->setObjectName(QStringLiteral("figuresPrismsSwitcher"));
        figuresPrismsSwitcher->setGeometry(QRect(290, 0, 61, 21));
        figuresPrismsSwitcher->setStyleSheet(QStringLiteral("background: rgb(209, 209, 209)"));
        label = new QLabel(bottomWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, -1, 51, 21));
        label->setStyleSheet(QStringLiteral(""));
        dataStrLabel = new QLineEdit(bottomWidget);
        dataStrLabel->setObjectName(QStringLiteral("dataStrLabel"));
        dataStrLabel->setEnabled(false);
        dataStrLabel->setGeometry(QRect(10, 20, 281, 21));
        createFigureButton = new QPushButton(centralWidget);
        createFigureButton->setObjectName(QStringLiteral("createFigureButton"));
        createFigureButton->setGeometry(QRect(380, 10, 101, 23));
        prismCreateWidget = new QWidget(centralWidget);
        prismCreateWidget->setObjectName(QStringLiteral("prismCreateWidget"));
        prismCreateWidget->setGeometry(QRect(339, 399, 161, 61));
        prismCreateWidget->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        label_5 = new QLabel(prismCreateWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 91, 16));
        prismHeightInput = new QLineEdit(prismCreateWidget);
        prismHeightInput->setObjectName(QStringLiteral("prismHeightInput"));
        prismHeightInput->setGeometry(QRect(110, 10, 41, 21));
        createPrism = new QPushButton(prismCreateWidget);
        createPrism->setObjectName(QStringLiteral("createPrism"));
        createPrism->setGeometry(QRect(70, 35, 80, 21));
        labelPrismDataError = new QLabel(prismCreateWidget);
        labelPrismDataError->setObjectName(QStringLiteral("labelPrismDataError"));
        labelPrismDataError->setGeometry(QRect(10, 40, 47, 13));
        widgetFigureCalcs = new QWidget(centralWidget);
        widgetFigureCalcs->setObjectName(QStringLiteral("widgetFigureCalcs"));
        widgetFigureCalcs->setGeometry(QRect(350, 320, 151, 71));
        widgetFigureCalcs->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        label_6 = new QLabel(widgetFigureCalcs);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 51, 16));
        figureSpace = new QLineEdit(widgetFigureCalcs);
        figureSpace->setObjectName(QStringLiteral("figureSpace"));
        figureSpace->setEnabled(false);
        figureSpace->setGeometry(QRect(70, 10, 71, 21));
        figurePerimeter = new QLineEdit(widgetFigureCalcs);
        figurePerimeter->setObjectName(QStringLiteral("figurePerimeter"));
        figurePerimeter->setEnabled(false);
        figurePerimeter->setGeometry(QRect(70, 40, 71, 21));
        label_7 = new QLabel(widgetFigureCalcs);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 51, 16));
        prismCalcs = new QWidget(centralWidget);
        prismCalcs->setObjectName(QStringLiteral("prismCalcs"));
        prismCalcs->setGeometry(QRect(350, 300, 151, 101));
        prismCalcs->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        frame = new QFrame(prismCalcs);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(1, -1, 71, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        frame_2 = new QFrame(prismCalcs);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(50, 0, 101, 101));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelPrismBaseSpace = new QLineEdit(frame_2);
        labelPrismBaseSpace->setObjectName(QStringLiteral("labelPrismBaseSpace"));
        labelPrismBaseSpace->setEnabled(false);

        verticalLayout_4->addWidget(labelPrismBaseSpace);

        labelPrismVolume = new QLineEdit(frame_2);
        labelPrismVolume->setObjectName(QStringLiteral("labelPrismVolume"));
        labelPrismVolume->setEnabled(false);

        verticalLayout_4->addWidget(labelPrismVolume);

        labelPrismSpace = new QLineEdit(frame_2);
        labelPrismSpace->setObjectName(QStringLiteral("labelPrismSpace"));
        labelPrismSpace->setEnabled(false);

        verticalLayout_4->addWidget(labelPrismSpace);

        moveUp = new QPushButton(centralWidget);
        moveUp->setObjectName(QStringLiteral("moveUp"));
        moveUp->setGeometry(QRect(20, 400, 21, 21));
        moveDown = new QPushButton(centralWidget);
        moveDown->setObjectName(QStringLiteral("moveDown"));
        moveDown->setGeometry(QRect(20, 440, 21, 21));
        moveLeft = new QPushButton(centralWidget);
        moveLeft->setObjectName(QStringLiteral("moveLeft"));
        moveLeft->setGeometry(QRect(0, 420, 21, 21));
        moveRight = new QPushButton(centralWidget);
        moveRight->setObjectName(QStringLiteral("moveRight"));
        moveRight->setGeometry(QRect(40, 420, 21, 21));
        prismsWidget = new GLPrismsWidget(centralWidget);
        prismsWidget->setObjectName(QStringLiteral("prismsWidget"));
        prismsWidget->setEnabled(true);
        prismsWidget->setGeometry(QRect(0, 0, 501, 501));
        rotateLeft = new QPushButton(prismsWidget);
        rotateLeft->setObjectName(QStringLiteral("rotateLeft"));
        rotateLeft->setGeometry(QRect(70, 420, 21, 21));
        rotateRight = new QPushButton(prismsWidget);
        rotateRight->setObjectName(QStringLiteral("rotateRight"));
        rotateRight->setGeometry(QRect(110, 420, 21, 21));
        rotateUp = new QPushButton(prismsWidget);
        rotateUp->setObjectName(QStringLiteral("rotateUp"));
        rotateUp->setGeometry(QRect(90, 400, 21, 21));
        rotateDown = new QPushButton(prismsWidget);
        rotateDown->setObjectName(QStringLiteral("rotateDown"));
        rotateDown->setGeometry(QRect(90, 440, 21, 21));
        rotateLabel = new QLabel(prismsWidget);
        rotateLabel->setObjectName(QStringLiteral("rotateLabel"));
        rotateLabel->setGeometry(QRect(80, 370, 41, 21));
        rotateLabel->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        moveLabel = new QLabel(prismsWidget);
        moveLabel->setObjectName(QStringLiteral("moveLabel"));
        moveLabel->setGeometry(QRect(0, 370, 61, 20));
        moveLabel->setStyleSheet(QStringLiteral("background: rgb(255, 243, 230)"));
        heightMinus = new QPushButton(prismsWidget);
        heightMinus->setObjectName(QStringLiteral("heightMinus"));
        heightMinus->setEnabled(true);
        heightMinus->setGeometry(QRect(40, 400, 21, 21));
        heightPlus = new QPushButton(prismsWidget);
        heightPlus->setObjectName(QStringLiteral("heightPlus"));
        heightPlus->setEnabled(true);
        heightPlus->setGeometry(QRect(0, 400, 21, 21));
        figuresGlWidget = new GLFiguresWidget(centralWidget);
        figuresGlWidget->setObjectName(QStringLiteral("figuresGlWidget"));
        figuresGlWidget->setEnabled(true);
        figuresGlWidget->setGeometry(QRect(0, 0, 501, 501));
        MainWindow->setCentralWidget(centralWidget);
        prismsWidget->raise();
        figuresGlWidget->raise();
        createFigureWidget->raise();
        bottomWidget->raise();
        createFigureButton->raise();
        prismCreateWidget->raise();
        widgetFigureCalcs->raise();
        prismCalcs->raise();
        moveUp->raise();
        moveDown->raise();
        moveLeft->raise();
        moveRight->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Figures", Q_NULLPTR));
        actionmoveUp->setText(QApplication::translate("MainWindow", "moveUp", Q_NULLPTR));
        actionmoveDown->setText(QApplication::translate("MainWindow", "moveDown", Q_NULLPTR));
        actionmoveLeft->setText(QApplication::translate("MainWindow", "moveLeft", Q_NULLPTR));
        actionmoveRight->setText(QApplication::translate("MainWindow", "moveRight", Q_NULLPTR));
        actionlistButtonClicked->setText(QApplication::translate("MainWindow", "listButtonClicked", Q_NULLPTR));
        labelDataError->setText(QApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260!", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264.", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \321\204\320\270\320\263\321\203\321\200\320\260:", Q_NULLPTR));
        pushButtonPrevFig->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264.", Q_NULLPTR));
        makePrismButton->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\277\321\200\320\270\320\267\320\274\320\276\320\271", Q_NULLPTR));
        scalePlusButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        scaleMinusButton->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButtonDelFigure->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        figuresPrismsSwitcher->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\267\320\274\321\213", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\275\320\265\321\202", Q_NULLPTR));
        createFigureButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\204\320\270\320\263\321\203\321\200\321\203", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\213\321\201\320\276\321\202\321\203:", Q_NULLPTR));
        createPrism->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        labelPrismDataError->setText(QApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260!", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "S. \320\236\321\201\320\275.", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "S. \320\237\320\276\320\262.", Q_NULLPTR));
        moveUp->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
        moveDown->setText(QApplication::translate("MainWindow", "v", Q_NULLPTR));
        moveLeft->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        moveRight->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        rotateLeft->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        rotateRight->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        rotateUp->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
        rotateDown->setText(QApplication::translate("MainWindow", "v", Q_NULLPTR));
        rotateLabel->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", Q_NULLPTR));
        moveLabel->setText(QApplication::translate("MainWindow", "\320\224\320\262\320\270\320\263\320\260\321\202\321\214", Q_NULLPTR));
        heightMinus->setText(QApplication::translate("MainWindow", "h-", Q_NULLPTR));
        heightPlus->setText(QApplication::translate("MainWindow", "h+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
