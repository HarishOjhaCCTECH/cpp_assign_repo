#include "stdafx.h"
#include "OpenGLWindow.h"

#include <QOpenGLContext>
#include <QOpenGLPaintDevice>
#include <QOpenGLShaderProgram>
#include <QPainter>
#include <iostream>


OpenGLWindow::OpenGLWindow(const QColor& background, QMainWindow* parent) :
    mBackground(background)
{
    setParent(parent);
    setMinimumSize(300, 250);
}
OpenGLWindow::~OpenGLWindow()
{
    reset();
}

void OpenGLWindow::reset()
{
    // And now release all OpenGL resources.
    makeCurrent();
    delete mProgram;
    mProgram = nullptr;
    delete mVshader;
    mVshader = nullptr;
    delete mFshader;
    mFshader = nullptr;
    mVbo.destroy();
    doneCurrent();

    QObject::disconnect(mContextWatchConnection);
}

void OpenGLWindow::paintGL()
{

    glClear(GL_COLOR_BUFFER_BIT);

    mProgram->bind();

    static GLfloat const triangleVertices[] = {
    60.0f,  10.0f,  0.0f,
    110.0f, 110.0f, 0.0f,
    10.0f,  110.0f, 0.0f
    };

    QColor color(0, 255, 0, 255);

    QMatrix4x4 pmvMatrix;
    pmvMatrix.ortho(rect());
    
    mProgram->enableAttributeArray(mVertexLocation);
    mProgram->setAttributeArray(mVertexLocation, triangleVertices, 3);
    mProgram->setUniformValue(mMatrixLocation, pmvMatrix);
    mProgram->setUniformValue(mColorLocation, color);

    glDrawArrays(GL_TRIANGLES, 0, 3);

    mProgram->disableAttributeArray(mVertexLocation);

}


void OpenGLWindow::initializeGL()
{
    initializeOpenGLFunctions();

    mProgram = new QOpenGLShaderProgram(this);
    
    // vertex shader
    mProgram->addShaderFromSourceCode(QOpenGLShader::Vertex,
        "attribute highp vec4 vertex;\n"
        "uniform highp mat4 matrix;\n"
        "void main(void)\n"
        "{\n"
        "   gl_Position = matrix * vertex;\n"
        "}");


    // fragment shader
    mProgram->addShaderFromSourceCode(QOpenGLShader::Fragment, 
        "uniform mediump vec4 color;\n"
        "void main(void)\n"
        "{\n"
        "   gl_FragColor = color;\n"
        "}");
    mProgram->link();
    
    mVertexLocation = mProgram->attributeLocation("vertex");
    mColorLocation = mProgram->uniformLocation("color");
    mMatrixLocation = mProgram->uniformLocation("matrix");
}