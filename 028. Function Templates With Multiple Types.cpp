#include <iostream>
#include <string>

// Define a template function 'add' that takes two parameters of types T1 and T2 and returns a value of type T1
template <typename T1, typename T2>
T1 add(T1 a, T2 b) {
    return a + b; // Return the sum of 'a' and 'b'
}

int main() {
    // Example 1: Sum of 2.5 (double) and 3 (int)
    std::cout << "Sum of 2.5 and 3: " << add(2.5, 3) << std::endl;

    // Example 2: Sum of 2 (int) and 3.5 (double)
    std::cout << "Sum of 2 and 3.5: " << add(2, 3.5) << std::endl;

    return 0;
}
