#ifndef EBO_CLASS_H
#define EBO_CLASS_H

#include<glad/glad.h>

class EBO
{
public:
	GLuint ID;
	EBO() {

	};
	void Bind();
	void Unbind();
	void Delete();
	void Generate(GLuint* indices, GLsizeiptr size) {
		glGenBuffers(1, &ID);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, indices, GL_STATIC_DRAW);
	}
};

#endif
