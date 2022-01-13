#include "VertexBuffer.h"
#include "Renderer.h"

VertexBuffer::VertexBuffer(GLfloat* data, GLsizeiptr size)
{
    GLCall(glGenBuffers(1, &ID));						// Make the VAO the current Vertex Array Object by binding it
	GLCall(glBindBuffer(GL_ARRAY_BUFFER, ID));			// Bind the VBO specifying it's a GL_ARRAY_BUFFER
	GLCall(glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW));
}

void VertexBuffer::Bind()
{
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, ID));
}

void VertexBuffer::Unbind()
{
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));
}

void VertexBuffer::Delete() 
{
    GLCall(glDeleteBuffers(1, &ID));
}