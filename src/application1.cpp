//#include <iostream>
//
//int main() {
//	std::cout << "Hello Motherfuckers" << std::endl;
//	std::cin.get();
//}

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


int main(void)
{
    GLFWwindow* window;
    
    std::cout << " === Hello Motherfuckers, im your dear father~ ===" << std::endl;



    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Check if GLEW is ready */
    if (glewInit() != GLEW_OK)
    {
        std::cout << "error" << std::endl;
    }

    /* Show GL version we are using */
    std::cout << "GLEW_version: " << glGetString(GL_VERSION) << std::endl;



    float positions[6] = {
        -0.5f, -0.5f,
        0.0f, 0.5f,
        0.5f, -0.5f
    };

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        //glBegin(GL_TRIANGLES);
        //glVertex2f(-0.5f, -0.5f);
        //glVertex2f(0.0f, 0.5f);
        //glVertex2f(0.5f, -0.5f);
        //glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}