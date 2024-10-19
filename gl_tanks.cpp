// gl_tanks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <GLFW/glfw3.h>
#include <string>

using std::string;

int main()
{
    if (!glfwInit())
    {
        return -1;
    }

    // I tried so hard, and got so far.
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    // But in the end
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // it doesn't even matter
    string glVersion = glfwGetVersionString();// returns 3.4.0 on my system
    string windowTitle = "GL Tanks | OpenGL v" + glVersion;
    int windowWidth = 1024;
    int windowHeight = 768;
    GLFWwindow* window = glfwCreateWindow(windowWidth, windowHeight, windowTitle.c_str(), NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        // opengl rendering code here

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
