#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Friend class declaration
    friend class AreaCalculator;
};

class AreaCalculator {
public:
    double calculateArea(const Rectangle& rect) {
        // Accessing private members of Rectangle
        return rect.width * rect.height;
    }
};

int main() {
    Rectangle rect(10.0, 5.0);
    AreaCalculator calculator;
    std::cout << "Area: " << calculator.calculateArea(rect) << std::endl;
    return 0;
}
