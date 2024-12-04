#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <ext/matrix_transform.hpp>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

#include <iostream>
#include <cmath>

#define SCR_WIDTH 600
#define SCR_HEIGHT 800

//  THIS CODE IS FOR THE JUMP ASSIGNMENT!!!!!!

//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
//void processInput(GLFWwindow* window);
//
//// Jump parameters
//float jumpHeight = 0.0f;
//bool isJumping = false;
//float jumpSpeed = 0.05f;
//float gravity = 0.005f;
//
//const char* vertexShaderSource =
//"#version 330 core\n"
//"layout (location = 0) in vec3 aPos;\n"
//"uniform mat4 transform;\n"
//"void main()\n"
//"{\n"
//"   gl_Position = transform * vec4(aPos, 1.0); "
//"}\0";
//const char* fragmentShaderSource =
//"#version 330 core\n"
//"out vec4 FragColor;\n"
//"void main()\n"
//"{\n"
//"   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
//"}\n\0";
//
//int main() {
//    glfwInit();
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
//    if (window == NULL) {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
//    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
//    glCompileShader(vertexShader);
//    int success;
//    char infoLog[512];
//    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//    if (!success) {
//        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
//        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
//    glCompileShader(fragmentShader);
//    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
//    if (!success) {
//        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
//        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    unsigned int shaderProgram = glCreateProgram();
//    glAttachShader(shaderProgram, vertexShader);
//    glAttachShader(shaderProgram, fragmentShader);
//    glLinkProgram(shaderProgram);
//    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//    if (!success) {
//        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
//        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//    }
//    glDeleteShader(vertexShader);
//    glDeleteShader(fragmentShader);
//
//    float vertices[] = {
//        -0.5f, -0.5f, 0.0f, // left
//        0.5f,  -0.5f, 0.0f, // right
//        0.0f,  0.5f,  0.0f  // top
//    };
//
//    unsigned int VBO, VAO;
//    glGenVertexArrays(1, &VAO);
//    glGenBuffers(1, &VBO);
//
//    glBindVertexArray(VAO);
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//    glEnableVertexAttribArray(0);
//    glBindBuffer(GL_ARRAY_BUFFER, 0);
//    glBindVertexArray(0);
//
//    while (!glfwWindowShouldClose(window)) {
//        processInput(window);
//
//        // Jumping function
//        if (isJumping) {
//            jumpHeight += jumpSpeed;
//            jumpSpeed -= gravity;
//            if (jumpHeight <= 0.0f) {
//                jumpHeight = 0.0f;
//                isJumping = false;
//                jumpSpeed = 0.05f;
//            }
//        }
//
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        glUseProgram(shaderProgram);
//        glm::mat4 transform = glm::mat4(1.0);
//        transform = glm::translate(transform, glm::vec3(0.0f, jumpHeight, 0.0f));
//
//        unsigned int transformLocation = glGetUniformLocation(shaderProgram, "transform");
//        glUniformMatrix4fv(transformLocation, 1, GL_FALSE, glm::value_ptr(transform));
//
//        glBindVertexArray(VAO);
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//
//    glfwTerminate();
//    return 0;
//}
//
//void processInput(GLFWwindow* window) {
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//
//    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS && !isJumping) {
//        isJumping = true;
//    }
//}
//
//void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
//    glViewport(0, 0, width, height);
//}



//THIS CODE IS FOR THE COLISSION ASSIGNMENT!!!!!!





void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window, float& leftPaddleY, float& rightPaddleY);

const float PADDLE_SPEED = 0.02f;
const float BALL_SPEED = 0.01f;

// Function to generate random colors
glm::vec3 randomColor() {
    return glm::vec3(static_cast<float>(rand()) / RAND_MAX,
        static_cast<float>(rand()) / RAND_MAX,
        static_cast<float>(rand()) / RAND_MAX);
}

int main() {
    // Initialize GLFW
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Pong Game", NULL, NULL);
    if (!window) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Initialize GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // Vertex shader
    const char* vertexShaderSource = R"(
        #version 330 core
        layout (location = 0) in vec3 aPos;
        uniform mat4 transform;
        void main() {
            gl_Position = transform * vec4(aPos, 1.0);
        }
    )";

    // Fragment shader
    const char* fragmentShaderSource = R"(
        #version 330 core
        out vec4 FragColor;
        uniform vec3 color;
        void main() {
            FragColor = vec4(color, 1.0);
        }
    )";

    // Compile shaders
    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);

    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);

    // Link shaders into the program
    unsigned int shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    // Paddles and ball vertices
    float paddleVertices[] = {
        -0.05f, -0.2f, 0.0f,
         0.05f, -0.2f, 0.0f,
         0.05f,  0.2f, 0.0f,
        -0.05f,  0.2f, 0.0f
    };

    float ballVertices[] = {
        -0.05f, -0.05f, 0.0f,
         0.05f, -0.05f, 0.0f,
         0.05f,  0.05f, 0.0f,
        -0.05f,  0.05f, 0.0f
    };

    unsigned int indices[] = { 0, 1, 2, 2, 3, 0 };

    // Paddle VAO
    unsigned int paddleVAO, paddleVBO, EBO;
    glGenVertexArrays(1, &paddleVAO);
    glGenBuffers(1, &paddleVBO);
    glGenBuffers(1, &EBO);

    glBindVertexArray(paddleVAO);

    glBindBuffer(GL_ARRAY_BUFFER, paddleVBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(paddleVertices), paddleVertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // Ball VAO
    unsigned int ballVAO, ballVBO;
    glGenVertexArrays(1, &ballVAO);
    glGenBuffers(1, &ballVBO);

    glBindVertexArray(ballVAO);

    glBindBuffer(GL_ARRAY_BUFFER, ballVBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(ballVertices), ballVertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // Ball setup
    glm::vec2 ballPos(0.0f, 0.0f);
    glm::vec2 ballVel(BALL_SPEED, BALL_SPEED);
    glm::vec3 ballColor(1.0f, 1.0f, 1.0f);

    // The Paddle positions
    float leftPaddleY = 0.0f, rightPaddleY = 0.0f;

    // Random seed
    srand(static_cast<unsigned int>(time(0)));

    // Rendering loop
    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(shaderProgram);

        // Handle input
        processInput(window, leftPaddleY, rightPaddleY);

        // Ball movement
        ballPos += ballVel;

        // Ball collision with top/bottom bounce back
        if (ballPos.y > 1.0f || ballPos.y < -1.0f) {
            ballVel.y = -ballVel.y;
        }

        // Ball collision for paddles
        if (ballPos.x - 0.05f < -0.9f + 0.05f && ballPos.x + 0.05f > -0.9f &&
            ballPos.y - 0.05f < leftPaddleY + 0.2f && ballPos.y + 0.05f > leftPaddleY - 0.2f) {
            ballVel.x = -ballVel.x;
            ballColor = randomColor();
        }

        if (ballPos.x + 0.05f > 0.9f - 0.05f && ballPos.x - 0.05f < 0.9f &&
            ballPos.y - 0.05f < rightPaddleY + 0.2f && ballPos.y + 0.05f > rightPaddleY - 0.2f) {
            ballVel.x = -ballVel.x;
            ballColor = randomColor();
        }

        // Ball reset code
        if (ballPos.x < -1.0f || ballPos.x > 1.0f) {
            ballPos = glm::vec2(0.0f, 0.0f);
            ballVel = glm::vec2(BALL_SPEED, BALL_SPEED);
            ballColor = glm::vec3(1.0f, 1.0f, 1.0f);  
        }

        // Renders the paddles
        unsigned int transformLoc = glGetUniformLocation(shaderProgram, "transform");
        unsigned int colorLoc = glGetUniformLocation(shaderProgram, "color");

        glm::mat4 transform = glm::translate(glm::mat4(1.0f), glm::vec3(-0.9f, leftPaddleY, 0.0f));
        glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(transform));
        glUniform3fv(colorLoc, 1, glm::value_ptr(glm::vec3(1.0f, 0.0f, 0.0f)));
        glBindVertexArray(paddleVAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        transform = glm::translate(glm::mat4(1.0f), glm::vec3(0.9f, rightPaddleY, 0.0f));
        glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(transform));
        glUniform3fv(colorLoc, 1, glm::value_ptr(glm::vec3(0.0f, 0.0f, 1.0f)));
        glBindVertexArray(paddleVAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        // Renders the ball
        transform = glm::translate(glm::mat4(1.0f), glm::vec3(ballPos.x, ballPos.y, 0.0f));
        glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(transform));
        glUniform3fv(colorLoc, 1, glm::value_ptr(ballColor));
        glBindVertexArray(ballVAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        // Swap buffers and poll events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

//Left paddle is W and S keys 
//Right paddle is Up and Down keys 
void processInput(GLFWwindow* window, float& leftPaddleY, float& rightPaddleY) {
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS && leftPaddleY < 0.8f) {
        leftPaddleY += PADDLE_SPEED;
    }
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS && leftPaddleY > -0.8f) {
        leftPaddleY -= PADDLE_SPEED;
    }
    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS && rightPaddleY < 0.8f) {
        rightPaddleY += PADDLE_SPEED;
    }
    if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS && rightPaddleY > -0.8f) {
        rightPaddleY -= PADDLE_SPEED;
    }
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

