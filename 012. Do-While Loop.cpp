#include <iostream>

int main() {
    int i = 0; // Initialize variable i to 0

    // Execute the loop at least once, then continue while i is less than 5
    do {
        std::cout << "i = " << i << std::endl; // Output the current value of i
        i++; // Increment i by 1
    } while (i <= 5); // Continue looping while i is less than 5

    return 0;
}
