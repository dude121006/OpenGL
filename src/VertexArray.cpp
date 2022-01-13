#include "VertexArray.h"

VertexArray::VertexArray()
{
    glGenVertexArrays(1, &ID);
}

void VertexArray::LinkVertexBuffer(VertexBuffer& vb, GLuint layout)
{
    vb.Bind();
    glVertexAttribPointer(layout, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);		// Configure the Vertex Attribute so that OpenGL knows how to read the VBO
	glEnableVertexAttribArray(layout);
    vb.Unbind();
}

void VertexArray::Bind()
{
	glBindVertexArray(ID);	
}

void VertexArray::Unbind()
{
	glBindVertexArray(0);	
}

void VertexArray::Delete()
{
    glDeleteVertexArrays(1, &ID);
}