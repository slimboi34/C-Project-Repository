#include <iostream>
#include <algorithm> // for std::sort

int main() {
    // Declare and initialize an array of integers
    int arr[] = {4, 2, 9, 5, 1, 8, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Use std::sort to sort the array in descending order
    std::sort(arr, arr + n, std::greater<int>());

    // Print the sorted array
    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

