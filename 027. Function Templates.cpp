#include <iostream>

// Define a function template named 'add' that takes two parameters of type T and returns a value of type T
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Call the 'add' function template with integers
    std::cout << "Sum of 2 and 3: " << add(2, 3) << std::endl;

    // Call the 'add' function template with doubles
    std::cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << std::endl;

    // Call the 'add' function template with strings    
    std::cout << "Sum of 'Hello' and ' World': " << add(std::string("Hello"), std::string(" World")) << std::endl;

    return 0;
}