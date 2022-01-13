#include "IndexBuffer.h"
#include "Renderer.h"

IndexBuffer::IndexBuffer(GLuint* data, GLsizeiptr size)// : m_Count(count)
{
    GLCall(glGenBuffers(1, &ID));						// Make the VAO the current Vertex Array Object by binding it
	GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID));			// Bind the VBO specifying it's a GL_ARRAY_BUFFER
	GLCall(glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STATIC_DRAW));
}

void IndexBuffer::Bind()
{
    GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID));
}

void IndexBuffer::Unbind() 
{
    GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0));
}

void IndexBuffer::Delete() 
{
    GLCall(glDeleteBuffers(1, &ID));
}