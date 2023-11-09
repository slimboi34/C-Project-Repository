#include <iostream>

int main() {
    int age;
    float height;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your height (in meters): ";
    std::cin >> height;

    std::cout << "Age: " << age << ", Height: " << height << " meters" << std::endl;

    return 0;
}
