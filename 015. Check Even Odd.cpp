#include <iostream>

// Function declaration
bool isEven(int number);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isEven(num)) {
        std::cout << num << " is even." << std::endl;
    } else {
        std::cout << num << " is odd." << std::endl;
    }

    return 0;
}

// Function definition
bool isEven(int number) {
    return (number % 2 == 0); // Check if the remainder of division by 2 is 0, indicating an even number
}
