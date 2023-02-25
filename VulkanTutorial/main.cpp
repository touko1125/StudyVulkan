//
//  main.cpp
//  VulkanTutorial
//
//  Created by 島田東子 on 2023/02/25.
//

#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class HelloTriangleApplication {
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }
private:
    GLFWwindow* window;
    void initWindow() {
        glfwInit();
        
        //間に何のAPIも挟まずサイズ変更不可能な状態でGLFWを呼び出す
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        
        //ウィンドウの作成
        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
    }
    
    void initVulkan() {
        
    }
    
    void mainLoop() {
        while(!glfwWindowShouldClose(window)){
            glfwPollEvents();
        }
    }
    
    void cleanup() {
        glfwDestroyWindow(window);
        
        glfwTerminate();
    }
};

int main(int argc, const char * argv[]) {
    HelloTriangleApplication app;
    
    try{
        app.run();
    }catch(const std::exception& error){
        std::cerr << error.what() << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
