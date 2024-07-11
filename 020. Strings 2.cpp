#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    // Append
    str.append(" How are you?");
    std::cout << "After append: " << str << std::endl;

    // Insert
    str.insert(7, "beautiful ");
    std::cout << "After insert: " << str << std::endl;

    // Replace
    str.replace(7, 9, "wonderful");
    std::cout << "After replace: " << str << std::endl;

    // Erase
    str.erase(7, 9);
    std::cout << "After erase: " << str << std::endl;

    // Find
    size_t pos = str.find("World");
    if (pos != std::string::npos) {
        std::cout << "Found 'World' at position: " << pos << std::endl;
    } else {
        std::cout << "'World' not found." << std::endl;
    }

    return 0;
}
