#include <iostream>

// Inline function definition
inline int square(int x) { // Define an inline function named 'square' that takes an integer parameter 'x'
    return x * x; // Return the square of 'x'
}

int main() {
    int num = 5;
    // Call the 'square' function and output the result
    std::cout << "Square of " << num << " is " << square(num) << std::endl;
    return 0;
}
