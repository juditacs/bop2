#include <iostream>
#include "rectangle.h"

int main() {
    double a, b;
    std::cout << "Enter a rectangle's two sides:\n";
    std::cin >> a >> b;
    Rectangle r1 = Rectangle(a, b);
    std::cout << "Information about the rectangle:\n";
    r1.print();
    return 0;
}

