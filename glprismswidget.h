#ifndef GLPRISMSWIDGET_H
#define GLPRISMSWIDGET_H

#include <QGLWidget>
#include <QOpenGLFunctions>

#include  "figure.h"
#include "figure_tools.h"
#include <cmath>
#include <GL/glu.h>


class GLPrismsWidget : public QGLWidget
{
    Q_OBJECT

private:
    double y_offset = 0;
    double x_offset = 0;
    double z_offset = 0;

    double x_rotate = 0;
    double y_rotate = 0;

    double scaleKoef = 1;
    Prism* currentPrism = nullptr;

    double calcY_Offset();
    double calcX_Offset();
    double calcZ_Offset();

public:
    GLPrismsWidget(QWidget *parent = nullptr);
    void upScale();
    void downScale();
    void setPrism(Prism*);
    void glDrawIt();

    void addOffsetUp();
    void addOffsetDown();
    void addOffsetLeft();
    void addOffsetRight();

    void addOffsetForward();
    void addOffsetBackward();

    void rotateUp();
    void rotateDown();
    void rotateLeft();
    void rotateRight();
protected:

    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int, int) override;
};

#endif // GLPRISMSWIDGET_H
