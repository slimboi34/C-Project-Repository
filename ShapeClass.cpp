#include <iostream>
#include <cmath> // for M_PI and sqrt

class Shape {
public:
    virtual ~Shape() {}  // Virtual destructor
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    bool isEqualArea(const Shape& other) const {
        return area() == other.area();
    }
    bool isEqualPerimeter(const Shape& other) const {
        return perimeter() == other.perimeter();
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

int main() {
    Shape* shape1 = new Rectangle(4, 5);
    Shape* shape2 = new Circle(3);

    std::cout << "Area of shape1: " << shape1->area() << std::endl;
    std::cout << "Perimeter of shape1: " << shape1->perimeter() << std::endl;

    std::cout << "Area of shape2: " << shape2->area() << std::endl;
    std::cout << "Perimeter of shape2: " << shape2->perimeter() << std::endl;

    std::cout << "Are the areas equal? " << (shape1->isEqualArea(*shape2) ? "Yes" : "No") << std::endl;
    std::cout << "Are the perimeters equal? " << (shape1->isEqualPerimeter(*shape2) ? "Yes" : "No") << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}




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
