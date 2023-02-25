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

class HelloTriangleApplication {
public:
    void run() {
        initVulkan();
        mainLoop();
        cleanup();
    }
private:
    void initVulkan() {
        
    }
    
    void mainLoop() {
        
    }
    
    void cleanup() {
        
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
