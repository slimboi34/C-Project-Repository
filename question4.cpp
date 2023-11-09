#include <iostream>

int main() {
    int num, sum_odd = 0, min, max;
    bool first = true;

    std::cout << "Enter a sequence of positive integers (enter -1 to end): ";

    while (std::cin >> num && num != -1) {
        if (num > 0) {
            if (first) {
                min = max = num;
                first = false;
            }
            if (num % 2 != 0) {
                sum_odd += num;
            }
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
        }
    }

    std::cout << "Sum of odd numbers: " << sum_odd << std::endl;
    std::cout << "Minimum value: " << min << std::endl;
    std::cout << "Maximum value: " << max << std::endl;

    return 0;
}
