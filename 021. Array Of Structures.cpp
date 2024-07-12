#include <iostream>

// Define a structure named Person
struct Person {
    std::string name; // Member variable to store name (string)
    int age;          // Member variable to store age (integer)
    float height;     // Member variable to store height (float)
};

int main() {
    // Declare an array of structures of type Person
    Person people[3];

    // Assign values to each structure in the array
    people[0] = {"John Doe", 30, 5.9};   // Assign values to the first structure
    people[1] = {"Jane Smith", 25, 5.5}; // Assign values to the second structure
    people[2] = {"Sam Brown", 22, 5.7};  // Assign values to the third structure

    // Access and output the values of each structure in the array
    for (int i = 0; i < 3; ++i) {
        std::cout << "Person " << i + 1 << ": " << std::endl; // Output the person number
        std::cout << "Name: " << people[i].name << std::endl; // Output the name of the person
        std::cout << "Age: " << people[i].age << std::endl;   // Output the age of the person
        std::cout << "Height: " << people[i].height << std::endl; // Output the height of the person
        std::cout << std::endl;
    }

    return 0;
}
