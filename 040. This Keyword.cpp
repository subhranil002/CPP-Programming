#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int length, int width) {
        this->length = length;  // Using this pointer to refer to class members
        this->width = width;
    }

    int area() const {
        return length * width;
    }
};

int main() {
    Rectangle rect(10, 5);

    std::cout << "Area: " << rect.area() << std::endl;

    return 0;
}
