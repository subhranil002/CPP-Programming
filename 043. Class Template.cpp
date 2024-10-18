#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Function to get the first value
    T1 getFirst() const {
        return first;
    }

    // Function to get the second value
    T2 getSecond() const {
        return second;
    }
};

int main() {
    Pair<int, double> pair1(123, 456.78);
    Pair<std::string, int> pair2("Age", 30);

    std::cout << "pair1: (" << pair1.getFirst() << ", " << pair1.getSecond() << ")" << std::endl;
    std::cout << "pair2: (" << pair2.getFirst() << ", " << pair2.getSecond() << ")" << std::endl;

    return 0;
}
