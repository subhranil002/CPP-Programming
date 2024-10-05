#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
    }

    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    Person person1;
    person1.introduce();

    Person person2("Diana", 22);
    person2.introduce();

    return 0;
}
