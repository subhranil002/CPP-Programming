#include <iostream>

class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal speaks" << std::endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Cat meows" << std::endl;
    }
};

void makeAnimalSpeak(const Animal& animal) {
    animal.speak();
}

int main() {
    Dog dog;
    Cat cat;

    makeAnimalSpeak(dog); // Output: Dog barks
    makeAnimalSpeak(cat); // Output: Cat meows

    return 0;
}
