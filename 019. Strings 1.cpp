#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // String length
    std::cout << "Length of str1: " << str1.length() << std::endl;

    // String concatenation
    std::string str3 = str1 + " " + str2;
    std::cout << "After concatenation: " << str3 << std::endl;

    // Accessing characters
    std::cout << "First character of str3: " << str3[0] << std::endl;

    // String comparison
    if (str1 == "Hello") {
        std::cout << "str1 is Hello." << std::endl;
    }

    // Substring
    std::string sub = str3.substr(0, 5);
    std::cout << "Substring of str3: " << sub << std::endl;

    return 0;
}
