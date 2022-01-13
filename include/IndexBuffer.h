#pragma once
#include <glad/glad.h>

class IndexBuffer
{
private:

public:
    GLuint ID;
    IndexBuffer(GLuint* data, GLsizeiptr size);
    // ~IndexBuffer();

    void Bind();
    void Delete();
    void Unbind();

    //inline unsigned int GetCount() const {return m_Count;}
};