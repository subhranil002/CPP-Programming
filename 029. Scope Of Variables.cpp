#include <iostream>

// Global variable
int globalVar = 10;

// Namespace scope variable
namespace MyNamespace {
    int x = 5;
}

// Function with parameters
void display(int num) {
    // Local variable inside function
    int localVar = 20;
    
    // Static variable inside function
    static int staticVar = 0;
    staticVar++;
    
    std::cout << "Inside display():" << std::endl;
    std::cout << "Parameter num: " << num << std::endl;
    std::cout << "Local variable localVar: " << localVar << std::endl;
    std::cout << "Static variable staticVar: " << staticVar << std::endl;
    std::cout << "Global variable globalVar: " << globalVar << std::endl;
    std::cout << "Namespace variable MyNamespace::x: " << MyNamespace::x << std::endl;
}

int main() {
    // Local variable in main()
    int mainVar = 30;

    std::cout << "Inside main():" << std::endl;
    std::cout << "Local variable mainVar: " << mainVar << std::endl;
    std::cout << "Global variable globalVar: " << globalVar << std::endl;
    std::cout << "Namespace variable MyNamespace::x: " << MyNamespace::x << std::endl;

    display(50); // Call function display() with parameter 50

    return 0;
}
