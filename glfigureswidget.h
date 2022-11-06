#ifndef GLFIGURESWIDGET_H
#define GLFIGURESWIDGET_H

#include <QGLWidget>
#include <QOpenGLFunctions>

#include  "Figures/Outer.h"


class GLFiguresWidget : public QGLWidget
{
    Q_OBJECT

private:
    double y_offset = 200;
    double x_offset = 200;
    double scaleKoef = 1;
    Outer* currentFigure = nullptr;
    
    double calcY_Offset();
    double calcX_Offset();

public:
    GLFiguresWidget(QWidget *parent = nullptr);
    void upScale();
    void downScale();
    void setFigure(Outer*);
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
