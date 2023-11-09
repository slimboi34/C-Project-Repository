#include <iostream>
#include <string>
#include <stdexcept>

class Temperature {
protected:
    double value;

public:
    Temperature(double val) : value(val) {}
    virtual ~Temperature() {}
    virtual void readTemperature() = 0;
    virtual double convertTemperature() = 0;
};

class CelsiusToFahrenheit : public Temperature {
public:
    CelsiusToFahrenheit(double val = 0.0) : Temperature(val) {}

    void readTemperature() {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> value;
    }

    double convertTemperature() {
        return value * 9.0 / 5.0 + 32;
    }
};

class FahrenheitToCelsius : public Temperature {
public:
    FahrenheitToCelsius(double val = 0.0) : Temperature(val) {}

    void readTemperature() {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> value;
    }

    double convertTemperature() {
        return (value - 32) * 5.0 / 9.0;
    }
};

int main() {
    int numConversions;

    std::cout << "Enter the number of temperature conversions to perform: ";
    std::cin >> numConversions;

    for (int i = 0; i < numConversions; i++) {
        std::cout << "Select conversion type:\n";
        std::cout << "1. Celsius to Fahrenheit\n";
        std::cout << "2. Fahrenheit to Celsius\n";
        std::cout << "Enter your choice (1 or 2): ";
        int choice;
        std::cin >> choice;

        Temperature *tempConversion = 0;

        if (choice == 1) {
            tempConversion = new CelsiusToFahrenheit();
        } else if (choice == 2) {
            tempConversion = new FahrenheitToCelsius();
        } else {
            std::cerr << "Invalid choice. Exiting.\n";
            return 1;
        }

        tempConversion->readTemperature();
        double result = tempConversion->convertTemperature();
        std::cout << "Converted temperature: " << result << std::endl;

        delete tempConversion;
    }

    return 0;
}
