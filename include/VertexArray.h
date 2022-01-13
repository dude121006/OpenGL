#ifndef VAO_CLASS_H
#define VAO_CLASS_H

#include <glad/glad.h>
#include "VertexBuffer.h"

class VertexArray
{
private:

public:
	GLuint ID;
	VertexArray();

	// Links a VBO to the VAO using a certain layout
    void LinkVertexBuffer(VertexBuffer& vb, GLuint layout);
    void Bind();
	void Unbind();
	void Delete();
};
#endif