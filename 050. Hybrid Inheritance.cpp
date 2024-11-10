#include <iostream>

// Base class 1
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    void speak() const {
        std::cout << "Animal " << name << " speaks" << std::endl;
    }
};

// Base class 2
class Pet {
protected:
    std::string name;

public:
    Pet(const std::string& name) : name(name) {}

    void play() const {
        std::cout << "Pet " << name << " plays" << std::endl;
    }
};

// Derived class (hybrid)
class Dog : public Animal, public Pet {
public:
    Dog(const std::string& name) : Animal(name), Pet(name) {}

    void bark() const {
        std::cout << "Dog " << Animal::name << " barks" << std::endl;
    }
};

int main() {
    Dog myDog("Buddy");

    myDog.speak(); // Output: Animal Buddy speaks
    myDog.play();  // Output: Pet Buddy plays
    myDog.bark();  // Output: Dog Buddy barks

    return 0;
}
