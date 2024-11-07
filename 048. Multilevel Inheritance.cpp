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

// Derived class 2 (multilevel)
class Labrador : public Dog {
public:
    Labrador(const std::string& name) : Dog(name) {}

    void fetch() const {
        std::cout << "Labrador " << name << " fetches" << std::endl;
    }
};

int main() {
    Labrador myLab("Rex");

    myLab.speak(); // Output: Animal Rex speaks
    myLab.bark();  // Output: Dog Rex barks
    myLab.fetch(); // Output: Labrador Rex fetches

    return 0;
}
