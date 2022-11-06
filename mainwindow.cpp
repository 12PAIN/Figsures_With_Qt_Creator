#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figure_tools.h"
#include "Figures/figuresmanager.h"
#include "Prism/Prism.h"
#include "buttonlist.h"

FiguresManager* figureManager = new FiguresManager();

FiguresCollection* figureCollection = new FiguresCollection();
PrismCollection* prismCollection = new PrismCollection();


int currentFigureNum = -1;
int currentPrismNum = -1;

Prism* currentPrism;
Outer* currentFigure;

Outer* currentOuter;

int CurrentType = 0;


void renderCurrent(Ui::MainWindow* ui){

    //Если фигуры
    if(CurrentType == 0){

        ui->figuresPrismsSwitcher->setText("Призмы");
        ui->label_18->setText("Текущая фигура:");


        //Если пусто
        if(figureCollection->getSize() == 0){
            ui->label->setText("нет.");

            ui->widgetFigureCalcs->hide();

            ui->makePrismButton->hide();

            ui->pushButton->hide();
            ui->pushButtonPrevFig->hide();

            ui->moveDown->hide();
            ui->moveUp->hide();
            ui->moveLeft->hide();
            ui->moveRight->hide();
            ui->figuresGlWidget->hide();

            //Если нет призм
            if(prismCollection->getSize() == 0){
                ui->prismHeightLabel->hide();
                ui->scaleMinusButton->hide();
                ui->scalePlusButton->hide();
                ui->pushButtonDelFigure->hide();
                ui->figuresPrismsSwitcher->hide();

                ui->prismsWidget->hide();
                ui->dataStrLabel->hide();
                ui->heightMinus->hide();
                ui->heightPlus->hide();

                ui->rotateDown->hide();
                ui->rotateUp->hide();
                ui->rotateLeft->hide();
                ui->rotateRight->hide();

            }else{
                CurrentType = 1;
                renderCurrent(ui);
                return;
            }

        //Если не пусто
        }else{

            ui->rotateLabel->hide();
            ui->moveLabel->hide();

            ui->heightMinus->hide();
            ui->heightPlus->hide();

            ui->rotateDown->hide();
            ui->rotateUp->hide();
            ui->rotateLeft->hide();
            ui->rotateRight->hide();
            ui->dataStrLabel->show();



            ui->moveDown->show();
            ui->moveUp->show();
            ui->moveLeft->show();
            ui->moveRight->show();


            currentFigure = figureCollection->GetFigure(currentFigureNum);

            ui->figuresGlWidget->show();
            ui->figuresGlWidget->setFigure(currentFigure);
            ui->figuresGlWidget->glDrawIt();
            ui->moveDown->show();
            ui->moveUp->show();
            ui->moveLeft->show();
            ui->moveRight->show();

            ui->prismsWidget->hide();

            ui->heightMinus->hide();
            ui->heightPlus->hide();

            ui->rotateDown->hide();
            ui->rotateUp->hide();
            ui->rotateLeft->hide();
            ui->rotateRight->hide();

            ui->widgetFigureCalcs->show();
            ui->prismCalcs->hide();

            ui->prismHeightLabel->hide();

            ui->figureSpace->setText(QString::number(currentFigure->getSpace()));
            ui->figurePerimeter->setText(QString::number(currentFigure->getPerimeter()));

            ui->label->setText(QString::number(currentFigureNum+1));

            ui->makePrismButton->show();
            ui->scaleMinusButton->show();
            ui->scalePlusButton->show();

            ui->pushButtonDelFigure->show();

            //Если есть призмы
            if(prismCollection->getSize() == 0){
                ui->figuresPrismsSwitcher->hide();
            }else{
                ui->figuresPrismsSwitcher->show();
            }

            //Кнопки переключения
            if(figureCollection->getSize() > 1){

                //Если не последний
                if(currentFigureNum >= 0 && currentFigureNum != figureCollection->getSize()-1){
                    ui->pushButton->show();
                }else ui->pushButton->hide();

                //Если не первый
                if(currentFigureNum != 0){
                    ui->pushButtonPrevFig->show();
                }else{
                    ui->pushButtonPrevFig->hide();
                }


            }else{
                ui->pushButton->hide();
                ui->pushButtonPrevFig->hide();
            }

            //Вывод информации:
            ui->dataStrLabel->setText(QString::fromStdString(currentFigure->getDataStr()));

        }

    //Если призмы
    }else{

        ui->figuresPrismsSwitcher->setText("Фигуры");
        ui->label_18->setText("Текущая призма:");
        ui->makePrismButton->hide();
        ui->figuresGlWidget->hide();
        ui->prismCreateWidget->hide();
        ui->dataStrLabel->hide();


        //Если пусто, переключаем на фигуры
        if(prismCollection->getSize() == 0){

            ui->prismCalcs->hide();

            ui->heightMinus->hide();
            ui->heightPlus->hide();

            ui->rotateDown->hide();
            ui->rotateUp->hide();
            ui->rotateLeft->hide();
            ui->rotateRight->hide();

            ui->rotateLabel->hide();
            ui->moveLabel->hide();

            CurrentType = 0;
            renderCurrent(ui);
            return;

        //Если не пусто
        }else{

            currentPrism = prismCollection->GetPrism(currentPrismNum);
            ui->dataStrLabel->show();
            ui->prismsWidget->setPrism(currentPrism);

            ui->prismsWidget->show();

            ui->heightMinus->show();
            ui->heightPlus->show();

            ui->rotateDown->show();
            ui->rotateUp->show();
            ui->rotateLeft->show();
            ui->rotateRight->show();

            ui->rotateLabel->show();
            ui->moveLabel->show();


            ui->moveDown->show();
            ui->moveUp->show();
            ui->moveLeft->show();
            ui->moveRight->show();


            ui->prismsWidget->show();
            ui->prismsWidget->glDrawIt();

            //Вывод высоты призмы
            QString textHieght = "H: ";
            textHieght += QString::number(currentPrism->getH());
            ui->prismHeightLabel->setText(textHieght);
            ui->prismHeightLabel->show();

            ui->widgetFigureCalcs->hide();


            ui->labelPrismBaseSpace->setText(QString::number(currentPrism->BaseSpace()));
            ui->labelPrismVolume->setText(QString::number(currentPrism->Volume()));
            ui->labelPrismSpace->setText(QString::number(currentPrism->FullSpace()));
            ui->prismCalcs->show();

            ui->label->setText(QString::number(currentPrismNum+1));

            ui->makePrismButton->hide();
            ui->scaleMinusButton->show();
            ui->scalePlusButton->show();

            ui->pushButtonDelFigure->show();

            //Если есть фигуры
            if(figureCollection->getSize() == 0){
                ui->figuresPrismsSwitcher->hide();
            }else{
                ui->figuresPrismsSwitcher->show();
            }

            //Вывод кнопок переключения
            if(prismCollection->getSize() > 1){

                //Если не последний
                if(currentPrismNum >= 0 && currentPrismNum != prismCollection->getSize()-1){
                    ui->pushButton->show();
                }else ui->pushButton->hide();

                //Если не первый
                if(currentPrismNum != 0){
                    ui->pushButtonPrevFig->show();
                }else{
                    ui->pushButtonPrevFig->hide();
                }


            }else{
                ui->pushButton->hide();
                ui->pushButtonPrevFig->hide();
            }

            //Вывод информации об основании призмы
            ui->dataStrLabel->setText(QString::fromStdString(currentPrism->getDataStr()));



        }



    }


}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->createFigureWidget->hide();

    ui->prismHeightLabel->hide();

    ui->figuresPrismsSwitcher->hide();

    ui->makePrismButton->hide();

    ui->pushButtonDelFigure->hide();

    ui->scaleMinusButton->hide();
    ui->scalePlusButton->hide();

    ui->pushButton->hide();
    ui->pushButtonPrevFig->hide();

    ui->labelDataError->hide();
    ui->prismCreateWidget->hide();
    ui->prismCalcs->hide();
    ui->widgetFigureCalcs->hide();
    ui->figuresGlWidget->hide();
    ui->moveDown->hide();
    ui->moveUp->hide();
    ui->moveLeft->hide();
    ui->moveRight->hide();

    ui->prismsWidget->hide();

    ui->heightMinus->hide();
    ui->heightPlus->hide();
    ui->dataStrLabel->hide();

    ui->rotateDown->hide();
    ui->rotateUp->hide();
    ui->rotateLeft->hide();
    ui->rotateRight->hide();

    ui->rotateLabel->hide();
    ui->moveLabel->hide();

    ui->widgetPropsCreate->hide();

    std::vector<std::string> signsList = figureManager->getSignList();

    for(int i = 0; i < signsList.size(); i++){

        std::string name = signsList[i];
        std::string idStr = signsList[i];
        std::string delim = signsList[i].substr(0,1);

        idStr = idStr.erase(0,1);
        int id = std::stoi(idStr.substr(0, idStr.find(delim)).c_str());
        name = name.erase(0,1);
        name = name.erase(0, name.find(delim)+1);

        QString nameQt = QString::fromStdString(name);

        QPushButton* button = new ButtonList(this,name, id);

        QObject::connect(button, SIGNAL(released()), SLOT(on_MainWindow_buttonListClickedSignal()));

        ui->figuresButtonLayout->addWidget(button);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createFigureButton_released()
{
    if(ui->createFigureWidget->isHidden()){
        ui->createFigureWidget->show();

        ui->widgetFigsCreating->show();

    }else{
        ui->createFigureWidget->hide();

        ui->widgetFigsCreating->hide();
    }
}

void MainWindow::on_figuresPrismsSwitcher_released()
{
    if(ui->figuresPrismsSwitcher->text() == "Призмы"){
        ui->makePrismButton->hide();
        CurrentType = 1;
        renderCurrent(ui);
        return;
    }

    CurrentType = 0;

    ui->prismHeightLabel->hide();

    renderCurrent(ui);
}

void MainWindow::on_pushButtonPrevFig_released()
{
    if(CurrentType == 0){
        currentFigureNum--;
    }

    if(CurrentType == 1){
        currentPrismNum--;
    }

    renderCurrent(ui);
}

void MainWindow::on_pushButton_released()
{
    if(CurrentType == 0){
        currentFigureNum++;
    }

    if(CurrentType == 1){
        currentPrismNum++;
    }

    renderCurrent(ui);
}

void MainWindow::on_pushButtonDelFigure_released()
{
    if(CurrentType == 0){
        figureCollection->DelFigure(currentFigureNum);
        if(figureCollection->getSize() >= 1){

            if(currentFigureNum != 0){
                currentFigureNum--;
            }

        }else{
            currentFigureNum = -1;
        }
    }

    if(CurrentType == 1){
        prismCollection->DelPrism(currentPrismNum);
        if(prismCollection->getSize() >= 1){

            if(currentPrismNum != 0){
                currentPrismNum--;
            }

        }else{
            currentPrismNum = -1;
        }
    }
    renderCurrent(ui);
}

void MainWindow::on_makePrismButton_released()
{
    if(!ui->prismCreateWidget->isHidden()){
        ui->labelPrismDataError->hide();
        ui->prismCreateWidget->hide();
        return;
    }

    ui->labelPrismDataError->hide();
    ui->prismCreateWidget->show();
}

void MainWindow::on_createPrism_released()
{
    QString prismHeight = ui->prismHeightInput->text();


    bool flag;
    double h = prismHeight.split(" ")[0].toDouble(&flag);

    if(flag){

        Prism* tmpPrism = createPrism(h, currentFigure);
        if(tmpPrism->testHeight() != false){
            currentPrism = tmpPrism;
            prismCollection->AddPrism(currentPrism);
            currentPrismNum = prismCollection->getSize() - 1;



            ui->labelPrismDataError->hide();
            ui->prismHeightInput->setText("");
            CurrentType = 1;
            ui->prismCreateWidget->hide();

        } else{
            delete tmpPrism;
            ui->labelPrismDataError->show();
        }
    }else{
        ui->labelPrismDataError->show();
    }

    renderCurrent(ui);
}

void MainWindow::on_scalePlusButton_released()
{
    if(CurrentType == 0) ui->figuresGlWidget->upScale();
    else ui->prismsWidget->upScale();
    renderCurrent(ui);
}

void MainWindow::on_scaleMinusButton_released()
{
    if(CurrentType == 0) ui->figuresGlWidget->downScale();
    else ui->prismsWidget->downScale();
    renderCurrent(ui);
}

void MainWindow::on_moveUp_released()
{
    if(CurrentType == 0) ui->figuresGlWidget->addOffsetUp();
    else ui->prismsWidget->addOffsetForward();
    renderCurrent(ui);
}

void MainWindow::on_moveLeft_released()
{
    if(CurrentType == 0) ui->figuresGlWidget->addOffsetLeft();
    else ui->prismsWidget->addOffsetLeft();
    renderCurrent(ui);
}

void MainWindow::on_moveDown_released()
{
    if(CurrentType == 0) ui->figuresGlWidget->addOffsetDown();
    else ui->prismsWidget->addOffsetBackward();
    renderCurrent(ui);
}

void MainWindow::on_moveRight_released()
{
    if(CurrentType == 0) ui->figuresGlWidget->addOffsetRight();
    else ui->prismsWidget->addOffsetRight();
    renderCurrent(ui);
}

void MainWindow::on_actionmoveUp_triggered()
{

}

void MainWindow::on_actionmoveDown_triggered()
{

}

void MainWindow::on_actionmoveLeft_triggered()
{

}

void MainWindow::on_actionmoveRight_triggered()
{

}

void MainWindow::on_moveUp_pressed()
{

}

void MainWindow::on_heightMinus_released()
{
    if(CurrentType == 1) ui->prismsWidget->addOffsetDown();
    renderCurrent(ui);
}

void MainWindow::on_heightPlus_released()
{
    if(CurrentType == 1) ui->prismsWidget->addOffsetUp();
    renderCurrent(ui);
}

void MainWindow::on_rotateUp_released()
{
    if(CurrentType == 1) ui->prismsWidget->rotateUp();
    renderCurrent(ui);
}

void MainWindow::on_rotateRight_released()
{
    if(CurrentType == 1) ui->prismsWidget->rotateRight();
    renderCurrent(ui);
}

void MainWindow::on_rotateDown_released()
{
    if(CurrentType == 1) ui->prismsWidget->rotateDown();
    renderCurrent(ui);
}

void MainWindow::on_rotateLeft_released()
{
    if(CurrentType == 1) ui->prismsWidget->rotateLeft();
    renderCurrent(ui);
}

void MainWindow::on_MainWindow_buttonListClickedSignal()
{

    ButtonList* btn = static_cast<ButtonList*>(sender());
    Outer* figure = figureManager->createFigureObject(btn->getID());
    currentOuter = figure;

    std::string propertiesStr = figure->getProperties();
    std::string delim = figure->getDelim();

    int countProperties = figure->getCountProperties();

    propertiesStr = propertiesStr.erase(0, propertiesStr.find(delim)+1);
    propertiesStr = propertiesStr.erase(0, propertiesStr.find(delim)+1);

    for(int i = 0; i < countProperties; i++){
        std::string prop = propertiesStr.substr(0, propertiesStr.find(delim));
        QLabel* label = new QLabel(QString::fromStdString("Введите "+ prop + ":"));
        if(i != countProperties-1) propertiesStr = propertiesStr.erase(0, propertiesStr.find(delim)+1);

        QLineEdit* lineEdit = new QLineEdit();
        lineEdit->setObjectName(QString::fromStdString(prop));

        ui->propertiesCreateLayout->addWidget(label);
        ui->propertiesCreateLayout->addWidget(lineEdit);
    }

    QPushButton* createButton = new QPushButton("Создать");
    createButton->setObjectName("createFigure");

    QObject::connect(createButton, SIGNAL(released()), SLOT(on_MainWindow_createButtonClicked()));

    ui->propertiesCreateLayout->addWidget(createButton);

    ui->widgetPropsCreate->show();
}

void MainWindow::on_MainWindow_buttonListClickedSignal(int aba)
{

}

void MainWindow::on_MainWindow_createButtonClicked()
{

    std::string propertiesStr = currentOuter->getProperties();
    std::string delim = currentOuter->getDelim();

    int countProperties = currentOuter->getCountProperties();

    propertiesStr = propertiesStr.erase(0, propertiesStr.find(delim)+1);
    propertiesStr = propertiesStr.erase(0, propertiesStr.find(delim)+1);


    double* data = new double[countProperties];

    bool flag;

    for(int i = 0; i < countProperties; i++){
        std::string prop = propertiesStr.substr(0, propertiesStr.find(delim));
        QLineEdit* inputLine = ui->widgetPropsCreate->findChild<QLineEdit *>(QString::fromStdString(prop));
        QString dataStr = inputLine->text();

        double currData = dataStr.split(" ")[0].toDouble(&flag);

        if(i != countProperties-1) propertiesStr = propertiesStr.erase(0, propertiesStr.find(delim)+1);

        if(flag) data[i] = currData;
        if(!flag) break;
    }

    if(flag){
        currentOuter->createFigure(data);
        flag = currentOuter->testSides();
    }

    if(flag){

        currentFigure = currentOuter;

        for(int i = 0; i < ui->propertiesCreateLayout->count(); i++){
            ui->propertiesCreateLayout->itemAt(i)->widget()->deleteLater();
        }
        ui->widgetPropsCreate->hide();
        ui->createFigureWidget->hide();
        ui->labelDataError->hide();

        CurrentType = 0;

        figureCollection->AddFigure(currentFigure);
        currentFigureNum = figureCollection->getSize()-1;

    }else{
        currentOuter->clearFigure();
        ui->labelDataError->show();
    }


    renderCurrent(ui);

}
