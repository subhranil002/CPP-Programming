#include <iostream>

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

// Another derived class
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

int main() {
    // Shape s; // Error: cannot declare variable 's' to be of abstract type 'Shape'

    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();  // Output: Drawing Circle
    shape2->draw();  // Output: Drawing Rectangle

    delete shape1;
    delete shape2;

    return 0;
}
