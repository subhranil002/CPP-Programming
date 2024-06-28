#include <iostream>

int main() {
    int a = 10;

    a += 5;  // a = a + 5
    std::cout << "a += 5: " << a << std::endl; // 15

    a -= 3;  // a = a - 3
    std::cout << "a -= 3: " << a << std::endl; // 12

    a *= 2;  // a = a * 2
    std::cout << "a *= 2: " << a << std::endl; // 24

    a /= 4;  // a = a / 4
    std::cout << "a /= 4: " << a << std::endl; // 6

    return 0;
}
