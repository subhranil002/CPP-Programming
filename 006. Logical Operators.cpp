#include <iostream>

int main() {
    bool x = true;
    bool y = false;

    std::cout << (x && y) << std::endl; // 0 (false)
    std::cout << (x || y) << std::endl; // 1 (true)
    std::cout << (!x) << std::endl;     // 0 (false)
    std::cout << (!y) << std::endl;     // 1 (true)

    return 0;
}
