#include <GLFW/glfw3.h>

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 640, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5, 0.5);
		glVertex2f(0, -0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(0.8, 0.8);
		glVertex2f(0.5, 0.6);
		glVertex2f(0.6, 0.5);
		glVertex2f(-0.8, 0.8);
		glVertex2f(-0.5, 0.6);
		glVertex2f(-0.6, 0.5);
		glVertex2f(-0.08, -0.55);
		glVertex2f(0.08, -0.55);
		glVertex2f(0, -0.9);
		glEnd();

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}