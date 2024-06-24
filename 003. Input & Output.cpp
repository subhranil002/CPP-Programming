#include <iostream>

int main() {
    int age; // Declare a variable to store the user's age

    // Prompt the user to enter their age
    std::cout << "Enter your age: ";

    // Read the age entered by the user
    std::cin >> age;

    // Output the entered age
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;

}
