#include <iostream>

// Define an enum for week days
enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    Day today = Friday;

    if (today == Friday) {
        std::cout << "Today is Friday!" << std::endl;
    }

    return 0;
}
