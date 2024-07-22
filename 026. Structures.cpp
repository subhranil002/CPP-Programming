#include <iostream>

// Define a structure named Person
struct Person {
    std::string name; // Member variable to store name (string)
    int age;          // Member variable to store age (integer)
    float height;     // Member variable to store height (float)
};

int main() {
    // Declare a structure variable of type Person
    Person person1;

    // Assign values to the structure members
    person1.name = "John Doe"; // Assign a string value to 'name'
    person1.age = 30;          // Assign an integer value to 'age'
    person1.height = 5.9;      // Assign a float value to 'height'

    // Access and output the structure members
    std::cout << "Name: " << person1.name << std::endl;     // Output the name
    std::cout << "Age: " << person1.age << std::endl;       // Output the age
    std::cout << "Height: " << person1.height << std::endl; // Output the height

    return 0;
}
