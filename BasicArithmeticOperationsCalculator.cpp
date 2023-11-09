#include <iostream>

int main() {
    int num1, num2;
    int product, difference, sum, remainder;

    // Prompt user for input
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Perform calculations
    product = num1 * num2;
    difference = num1 - num2;
    sum = product + difference;

    // Check for division by zero and compute the remainder
    if (num2 == 0) {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    } else {
        remainder = sum % num2;

        // Print results
        std::cout << "Product: " << product << std::endl;
        std::cout << "Difference: " << difference << std::endl;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Remainder: " << remainder << std::endl;
    }

    return 0;
}
