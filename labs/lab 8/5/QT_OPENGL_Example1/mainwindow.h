#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QOpenGLWindow> // for open GL Window
#include <QSurfaceFormat>
#include <QOpenGLFunctions>
#include <QtOpenGL>
#include <GL/glu.h>

//QMainWindow designed to create windows that performs openGL rendering
// also offters performance better compared to opengl widget
class MainWindow : public QOpenGLWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    //initializeGL() function should set up any required OpenGL resources and state
    virtual void initializeGL();
    //resizeGL() function is called whenever the widget has been resized
    virtual void resizeGL(int w, int h);
    // paintGL() is called whenever the window contents needs to be painted
    virtual void paintGL();

    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    /*
     * An OpenGL context represents many things.
     * A context stores all of the state associated with this instance of OpenGL.
    */
    QOpenGLContext *context;
    //QOpenGLFunctions provides cross-platform access to the OpenGL ES 2.0 API
    QOpenGLFunctions *openGLFunctions;


};
#endif // MAINWINDOW_H
