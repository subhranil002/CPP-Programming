#include <iostream>

// Function declaration
int add(int a, int b); // Declare a function named 'add' that takes two integers and returns an integer

int main() {
    int result = add(5, 3); // Call the 'add' function with arguments 5 and 3 and store the result
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b; // Return the sum of 'a' and 'b'
}
