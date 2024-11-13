#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    Animal* animal;
    Dog dog;
    Cat cat;

    // Pointing to a Dog object
    animal = &dog;
    animal->makeSound();  // Output: Woof! Woof!

    // Pointing to a Cat object
    animal = &cat;
    animal->makeSound();  // Output: Meow! Meow!

    return 0;
}
