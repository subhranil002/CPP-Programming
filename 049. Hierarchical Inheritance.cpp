#include <iostream>

// Base class
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    void speak() const {
        std::cout << "Animal " << name << " speaks" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void bark() const {
        std::cout << "Dog " << name << " barks" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {}

    void meow() const {
        std::cout << "Cat " << name << " meows" << std::endl;
    }
};

int main() {
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    myDog.speak(); // Output: Animal Buddy speaks
    myDog.bark();  // Output: Dog Buddy barks

    myCat.speak(); // Output: Animal Whiskers speaks
    myCat.meow();  // Output: Cat Whiskers meows

    return 0;
}
