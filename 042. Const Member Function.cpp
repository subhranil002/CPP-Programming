#include <iostream>

class Car {
private:
    std::string brand;
    int speed;

public:
    // Constructor
    Car(std::string b, int s) : brand(b), speed(s) {}

    // Const member function to get the brand
    std::string getBrand() const {
        return brand;
    }

    // Const member function to get the speed
    int getSpeed() const {
        return speed;
    }

    // Non-const member function to set the speed
    void setSpeed(int s) {
        speed = s;
    }

    // Const member function to display the car details
    void display() const {
        std::cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << std::endl;
    }
};

int main() {
    Car myCar("Toyota", 120);

    myCar.display();

    // Using const member functions
    std::cout << "Brand: " << myCar.getBrand() << std::endl;
    std::cout << "Speed: " << myCar.getSpeed() << std::endl;

    // Changing speed
    myCar.setSpeed(150);
    myCar.display();

    return 0;
}
