#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements

    printArray(arr, size);  // Pass array to function

    return 0;
}
