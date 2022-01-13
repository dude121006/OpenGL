#pragma once
#include <glad/glad.h>

class VertexBuffer
{
private:

public:
    GLuint ID;
    VertexBuffer(GLfloat* data, GLsizeiptr size);
    // ~VertexBuffer();

    void Bind();
    void Unbind();
    void Delete();
};