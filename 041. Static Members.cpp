#include <iostream>

class Counter {
private:
    static int count;  // Declare static data member

public:
    // Constructor
    Counter() {
        ++count;
    }

    // Function to get the count
    static int getCount() {
        return count;
    }
};

// Define and initialize static data member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    std::cout << "Number of objects created: " << Counter::getCount() << std::endl;

    return 0;
}
