#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

namespace Physics {
    double gravity = 9.81;

    double potentialEnergy(double mass, double height) {
        return mass * gravity * height;
    }
}

int main() {
    std::cout << "Math::add(3, 4): " << Math::add(3, 4) << std::endl;
    std::cout << "Math::subtract(10, 3): " << Math::subtract(10, 3) << std::endl;
    std::cout << "Physics::potentialEnergy(5, 10): " << Physics::potentialEnergy(5, 10) << std::endl;
    return 0;
}
