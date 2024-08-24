#include <iostream>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data data;

    data.i = 10;
    std::cout << "data.i = " << data.i << std::endl;

    data.f = 220.5;
    std::cout << "data.f = " << data.f << std::endl;

    data.c = 'A';
    std::cout << "data.c = " << data.c << std::endl;

    // Note that only the last assigned value is valid
    std::cout << "data.i (after setting c) = " << data.i << std::endl;

    return 0;
}
