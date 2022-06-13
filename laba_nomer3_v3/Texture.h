#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#include<glad/glad.h>
#include<stb/stb_image.h>
#include <vector>
#include"shaderClass.h"
using namespace std;
class Texture
{
public:
	unsigned int ID;
	GLenum type;
	GLuint unit;
	Texture(const char* image, GLenum texType, GLuint slot, GLenum format, GLenum pixelType);
	Texture() {

	}
	void texUnit(Shader& shader, const char* uniform, GLuint unit);
	void Bind();
	void Unbind();
	void Delete();
};
#endif