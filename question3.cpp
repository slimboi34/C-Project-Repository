#include <iostream>
#include <string>

int main() {
    int num_sides;
    std::string polygon_name;

    std::cout << "Enter the number of sides of a polygon (3-10): ";
    std::cin >> num_sides;

    if (num_sides >= 3 && num_sides <= 10) {
        switch (num_sides) {
            case 3:
                polygon_name = "Triangle";
                break;
            case 4:
                polygon_name = "Quadrilateral";
                break;
            case 5:
                polygon_name = "Pentagon";
                break;
            case 6:
                polygon_name = "Hexagon";
                break;
            case 7:
                polygon_name = "Heptagon";
                break;
            case 8:
                polygon_name = "Octagon";
                break;
            case 9:
                polygon_name = "Nonagon";
                break;
            case 10:
                polygon_name = "Decagon";
                break;
        }

        std::cout << "The polygon is a(n): " << polygon_name << std::endl;
    } else {
        std::cout << "Error: Invalid number of sides. Please enter a number between 3 and 10." << std::endl;
    }

    return 0;
}
