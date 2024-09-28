#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
    }

    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // Create an object of Person using the constructor
    Person person1("Charlie", 28);
    person1.introduce();

    return 0;
}
