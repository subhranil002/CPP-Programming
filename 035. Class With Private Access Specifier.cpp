#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    void setName(std::string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    Person person1;
    person1.setName("Bob");
    person1.setAge(25);
    person1.introduce();

    return 0;
}
