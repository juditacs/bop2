#include <iostream>
#include "rectangle.h"

int main() {
    double a, b;
    std::cout << "Enter a rectangle's two sides:\n";
    std::cin >> a >> b;
    Rectangle r1 = Rectangle(a, b);
    // try uncommenting this line. It should produce a compile error, 
    // the attribute should not be accessible from the outside.
    // r1.a;
    std::cout << "Information about the rectangle:\n";
    r1.print();
    return 0;
}

