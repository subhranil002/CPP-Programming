#include <iostream>

// Function declaration
void swap(int &a, int &b); // Declare a function named 'swap' that takes two integer references and swaps their values

int main() {
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y); // Call the 'swap' function passing references to 'x' and 'y'
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    return 0;
}

// Function definition
void swap(int &a, int &b) {
    int temp = a; // Store the value of 'a' in a temporary variable
    a = b; // Assign the value of 'b' to 'a'
    b = temp; // Assign the value stored in the temporary variable to 'b', effectively swapping the values of 'a' and 'b'
}
