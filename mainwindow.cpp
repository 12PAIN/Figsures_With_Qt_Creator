#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figure_tools.h"

FiguresCollection* figureCollection = new FiguresCollection();
PrismCollection* prismCollection = new PrismCollection();

int currentFigureNum = -1;
int currentPrismNum = -1;

Prism* currentPrism;
Figure* currentFigure;

int CurrentType = 0;

void renderCurrent(Ui::MainWindow* ui){


    //Если фигуры
    if(CurrentType == 0){

        ui->figuresPrismsSwitcher->setText("Призмы");
        ui->label_18->setText("Текущая фигура:");


        //Если пусто
        if(figureCollection->getSize() == 0){
            ui->label->setText("нет.");

            ui->circleRadiusLabel->hide();
            ui->triangleSideALabel->hide();
            ui->triangleSideBLabel->hide();
            ui->triangleSideCLabel->hide();

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

            ui->figureSpace->setText(QString::number(currentFigure->Space()));
            ui->figurePerimeter->setText(QString::number(currentFigure->Perimeter()));

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
            if(currentFigure->getType() == CIRCLE){
                ui->triangleSideALabel->hide();
                ui->triangleSideBLabel->hide();
                ui->triangleSideCLabel->hide();

                ui->circleRadiusLabel->show();
                QString text = "R: ";
                text += QString::number(getCastedCircle(currentFigure)->GetR());
                ui->circleRadiusLabel->setText(text);
            }

            if(currentFigure->getType() == TRIANGLE){
                ui->triangleSideALabel->show();
                ui->triangleSideBLabel->show();
                ui->triangleSideCLabel->show();

                ui->circleRadiusLabel->hide();

                QString textSideA = "A: ";
                QString textSideB = "B: ";
                QString textSideC = "C: ";

                Triangle* triangle = getCastedTriangle(currentFigure);

                textSideA += QString::number(triangle->GetA());
                textSideB += QString::number(triangle->GetB());
                textSideC += QString::number(triangle->GetC());

                ui->triangleSideALabel->setText(textSideA);
                ui->triangleSideBLabel->setText(textSideB);
                ui->triangleSideCLabel->setText(textSideC);
            }

        }

    //Если призмы
    }else{

        ui->figuresPrismsSwitcher->setText("Фигуры");
        ui->label_18->setText("Текущая призма:");
        ui->makePrismButton->hide();
        ui->figuresGlWidget->hide();
        ui->prismCreateWidget->hide();

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
            textHieght += QString::number(currentPrism->GetH());
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
            if(currentPrism->getType() == CIRCLE){
                ui->triangleSideALabel->hide();
                ui->triangleSideBLabel->hide();
                ui->triangleSideCLabel->hide();

                ui->circleRadiusLabel->show();
                QString text = "R: ";
                text += QString::number(getCastedCylinder(currentPrism)->GetR());
                ui->circleRadiusLabel->setText(text);
            }

            if(currentPrism->getType() == TRIANGLE){
                ui->triangleSideALabel->show();
                ui->triangleSideBLabel->show();
                ui->triangleSideCLabel->show();

                ui->circleRadiusLabel->hide();

                QString textSideA = "A: ";
                QString textSideB = "B: ";
                QString textSideC = "C: ";

                TrianglePrism* triangle = getCastedTrianglePrism(currentPrism);

                textSideA += QString::number(triangle->GetA());
                textSideB += QString::number(triangle->GetB());
                textSideC += QString::number(triangle->GetC());

                ui->triangleSideALabel->setText(textSideA);
                ui->triangleSideBLabel->setText(textSideB);
                ui->triangleSideCLabel->setText(textSideC);
            }



        }



    }


}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->createFigureWidget->hide();
    ui->triangleCreateWidget->hide();
    ui->circleCreateWidget->hide();
    ui->prismHeightLabel->hide();

    ui->circleRadiusLabel->hide();
    ui->triangleSideALabel->hide();
    ui->triangleSideBLabel->hide();
    ui->triangleSideCLabel->hide();

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

    ui->rotateDown->hide();
    ui->rotateUp->hide();
    ui->rotateLeft->hide();
    ui->rotateRight->hide();

    ui->rotateLabel->hide();
    ui->moveLabel->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_triangleCreatePushButton_released()
{
    ui->circleCreateWidget->hide();
    ui->triangleCreateWidget->show();
}

void MainWindow::on_circleCreatePushButton_released()
{
    ui->circleCreateWidget->show();
    ui->triangleCreateWidget->hide();
}

void MainWindow::on_createFigureButton_released()
{
    if(ui->createFigureWidget->isHidden()){
        ui->createFigureWidget->show();
    }else{
        ui->createFigureWidget->hide();
    }
}

void MainWindow::on_creatingCircleButton_released()
{
    QString radiusStr = ui->circleRadius->text();
    bool flag;
    double radius = radiusStr.split(" ")[0].toDouble(&flag);
    if(flag){
        Circle* tmpFigure = getCastedCircle(createFigure(radius));
        if(tmpFigure->TestMySides() == DATA_ERROR){
            delete tmpFigure;
            ui->labelDataError->show();
            return;
        }
        currentFigure = tmpFigure;
        figureCollection->AddFigure(currentFigure);
        currentFigureNum = figureCollection->getSize() - 1;
        ui->circleCreateWidget->hide();
        ui->labelDataError->hide();

        ui->circleRadius->setText("");

    }else{
        ui->labelDataError->show();
    }

    CurrentType = 0;

    renderCurrent(ui);
}

void MainWindow::on_creatingTriangleButton_released()
{
    QString sideAStr = ui->triangleSideA->text();
    QString sideBStr = ui->triangleSideB->text();
    QString sideCStr = ui->triangleSideC->text();

    bool flag;
    double a = sideAStr.split(" ")[0].toDouble(&flag);
    double b = sideBStr.split(" ")[0].toDouble(&flag);
    double c = sideCStr.split(" ")[0].toDouble(&flag);
    if(flag){
        Triangle* tmpFigure = getCastedTriangle(createFigure(a,b,c));
        if(tmpFigure->TestMySides() != DATA_ERROR){
            currentFigure = tmpFigure;
            figureCollection->AddFigure(currentFigure);
            currentFigureNum = figureCollection->getSize() - 1;
            ui->triangleCreateWidget->hide();
            ui->labelDataError->hide();

            ui->triangleSideA->setText("");
            ui->triangleSideB->setText("");
            ui->triangleSideC->setText("");

        } else{
            delete tmpFigure;
            ui->labelDataError->show();
        }
    }else{
        ui->labelDataError->show();
    }

    CurrentType = 0;

    renderCurrent(ui);
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

        Prism* tmpPrism = createPrism(h, currentFigure, currentFigure->getType());
        if(tmpPrism->TestHeight() != DATA_ERROR){
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
