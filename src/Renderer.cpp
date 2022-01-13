#include "Renderer.h"

#include <iostream>

void GLClearErrors()
{
	while(glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
	while (GLenum error = glGetError())
	{
		std::cout << "[Error] " << error << std::endl << "\tFunction: " << function << std::endl << "\tFile: " << file << std::endl;
		std::cout << "\tLine: " << line << std::endl;
		return false;
	}
	return true;
}

