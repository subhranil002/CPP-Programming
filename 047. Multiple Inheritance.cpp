#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }
};

class Mammal {
public:
    void breathe() {
        std::cout << "I can breathe!" << std::endl;
    }
};

class Dog : public Animal, public Mammal {
public:
    void bark() {
        std::cout << "I can bark! Woof woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.breathe();  // Inherited from Mammal
    myDog.bark();  // Defined in Dog
    return 0;
}
