#include <iostream>

int main() {
    int a = 10, b = 20;

    std::cout << (a == b) << std::endl; // 0 (false)
    std::cout << (a != b) << std::endl; // 1 (true)
    std::cout << (a < b) << std::endl;  // 1 (true)
    std::cout << (a > b) << std::endl;  // 0 (false)
    std::cout << (a <= b) << std::endl; // 1 (true)
    std::cout << (a >= b) << std::endl; // 0 (false)

    return 0;
}
