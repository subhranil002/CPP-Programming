#include <iostream>

int main() {
    int number = 0;

    // Check if 'number' is greater than 0
    if (number > 0) {
        std::cout << "The number is positive." << std::endl; // Output message if 'number' is positive
    } 
    // Check if 'number' is less than 0
    else if (number < 0) {
        std::cout << "The number is negative." << std::endl; // Output message if 'number' is negative
    } 
    // If 'number' is not greater than 0 or less than 0, it must be equal to 0
    else {
        std::cout << "The number is zero." << std::endl; // Output message if 'number' is zero
    }

    return 0;
}
