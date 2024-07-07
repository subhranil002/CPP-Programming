#include <iostream>

// Function overloading
int add(int a, int b) { // Function to add two integers
    return a + b;
}

double add(double a, double b) { // Function to add two doubles
    return a + b;
}

int main() {
    std::cout << "Sum of integers: " << add(5, 3) << std::endl; // Call the add function with integers
    std::cout << "Sum of doubles: " << add(2.5, 1.5) << std::endl; // Call the add function with doubles
    return 0;
}
