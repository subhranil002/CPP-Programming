#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // Declare a pointer to an integer named 'ptr' and assign it the address of the first element of 'arr'

    // Output the value pointed to by 'ptr' (the first element of 'arr')
    std::cout << "Pointer ptr points to: " << *ptr << std::endl;

    ptr++; // Increment the pointer to point to the next element of 'arr'

    // Output the value pointed to by 'ptr' after incrementing (the second element of 'arr')
    std::cout << "After increment, ptr points to: " << *ptr << std::endl;

    return 0;
}
