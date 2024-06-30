#include <iostream>

int main() {
    char grade;

    std::cout << "Enter your grade (A, B, C, D, F): ";
    std::cin >> grade;

    // Determine the message to output based on the entered grade
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl; // Output message for grade A
            break;
        case 'B':
            std::cout << "Good!" << std::endl; // Output message for grade B
            break;
        case 'C':
            std::cout << "Fair!" << std::endl; // Output message for grade C
            break;
        case 'D':
            std::cout << "Poor!" << std::endl; // Output message for grade D
            break;
        case 'F':
            std::cout << "Fail!" << std::endl; // Output message for grade F
            break;
        default:
            std::cout << "Invalid grade!" << std::endl; // Output message for invalid grade
            break;
    }

    return 0;
}
