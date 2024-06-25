#include <iostream>

int main() {
    int a = 20;
    int b = 5;

    std::cout << a + b << std::endl; // Output: 25 (addition)
    std::cout << a - b << std::endl; // Output: 15 (subtraction)
    std::cout << a * b << std::endl; // Output: 100 (multiplication)
    std::cout << a / b << std::endl; // Output: 4 (integer division)
    std::cout << a % b << std::endl; // Output: 0 (remainder/modulus)

    a++; // Increment a
    b--; // Decrement b

    std::cout << a << std::endl; // Output: 21 (post-increment)
    std::cout << b << std::endl; // Output: 4 (post-decrement)

    ++a; // Increment a
    --b; // Decrement b

    std::cout << a << std::endl; // Output: 22 (pre-increment)
    std::cout << b << std::endl; // Output: 3 (pre-decrement)

    return 0;
}
