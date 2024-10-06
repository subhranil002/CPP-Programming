#include <iostream>

class Person {
public:
    Person() {
        std::cout << "Constructor called" << std::endl;
    }

    ~Person() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    Person person1;

    return 0;
}
