#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }

    void sleep() {
        std::cout << "I can sleep!" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "I can bark! Woof woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.sleep();  // Inherited from Animal
    myDog.bark();  // Defined in Dog
    return 0;
}
