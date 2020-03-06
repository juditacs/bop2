#include "rectangle.h"

Rectangle::Rectangle(double a, double b) {
    if (a < 0) {
        std::cerr << "Rectangle side [a] cannot be negative, setting it to 0\n";
        a = 0;
    }
    if (b < 0) {
        std::cerr << "Rectangle side [b] cannot be negative, setting it to 0\n";
        b = 0;
    }
    this->a = a;
    if (b == 0) this->b = a;
    else this->b = b;
}

double Rectangle::Perimeter() const {
    return 2*(a+b);
}

double Rectangle::Area() const {
    return a*b;
}

void Rectangle::print() const {
    std::cout << "Sides a=" << a << ", b=" << b <<"\n";
    std::cout << "Perimeter=" << Perimeter() << "\n";
    std::cout << "Area=" << Area() << "\n";
}
