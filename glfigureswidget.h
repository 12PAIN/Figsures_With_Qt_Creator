#ifndef GLFIGURESWIDGET_H
#define GLFIGURESWIDGET_H

#include <QGLWidget>
#include <QOpenGLFunctions>

#include  "figure.h"
#include "figure_tools.h"
#include <cmath>


class GLFiguresWidget : public QGLWidget
{
    Q_OBJECT

private:
    double y_offset = 200;
    double x_offset = 200;
    double scaleKoef = 1;
    Figure* currentFigure = nullptr;
    
    double calcY_Offset();
    double calcX_Offset();

public:
    GLFiguresWidget(QWidget *parent = nullptr);
    void upScale();
    void downScale();
    void setFigure(Figure*);
    void glDrawIt();
    void resetScale();
    void addOffsetUp();
    void addOffsetDown();
    void addOffsetLeft();
    void addOffsetRight();
protected:

    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int, int) override;
};

#endif // GLFIGURESWIDGET_H
