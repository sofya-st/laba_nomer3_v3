#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include<glad/glad.h>

class VBO
{
public:
	GLuint ID;
	VBO() {

	};
	void Bind();
	void Unbind();
	void Delete();
	void Generate(GLfloat* vertices, GLsizeiptr size) {
		glGenBuffers(1, &ID);
		glBindBuffer(GL_ARRAY_BUFFER, ID);
		glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
	}
};

#endif
