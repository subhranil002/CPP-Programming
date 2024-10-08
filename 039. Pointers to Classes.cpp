#include <iostream>

class Person {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // Declare a pointer to a Person
    Person* personPtr;

    // Dynamically allocate memory for a Person object
    personPtr = new Person;
    personPtr->name = "Eve";
    personPtr->age = 35;
    personPtr->introduce();

    // Deallocate memory
    delete personPtr;

    return 0;
}
