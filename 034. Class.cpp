#include <iostream>

// Define a class
class Person {
public:  // Access specifier
    std::string name;  // Data member (attribute)
    int age;  // Data member (attribute)

    // Member function (method)
    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // Create an object of Person
    Person person1;
    person1.name = "Alice";
    person1.age = 30;
    person1.introduce();

    return 0;
}
