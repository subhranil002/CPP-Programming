#include <iostream>

int main() {
    int var = 10; 
    int *ptr = &var; // Declare a pointer to an integer named 'ptr' and assign it the address of 'var'

    // Output the value and address of 'var'
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;

    // Output the address stored in the pointer 'ptr'
    std::cout << "Pointer ptr stores address: " << ptr << std::endl;

    // Output the value stored at the address pointed to by 'ptr' 
    std::cout << "Pointer ptr dereferenced: " << *ptr << std::endl;

    return 0;
}
