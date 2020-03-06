#include <iostream>
#include "rectangle.h"

int main() {
    // test constructors
    // default contructor
    std::cout << "Rectangle() should have 0 length sides" << std::endl;
    Rectangle r1;
    r1.print();
    std::cout << std::endl;
    // try uncommenting this line. It should produce a compile error, 
    // the attribute should not be accessible from the outside.
    // r1.a;

    std::cout << "Rectangle(2.1) should be a square\n";
    Rectangle r2(2.1);
    r2.print();
    std::cout << std::endl;

    // invalid side
    std::cout << "Rectangle(2.1, -3) should be a=2.1, b=0\n";
    Rectangle r3(2.1, -3);
    r3.print();
    std::cout << std::endl;

    // normal rectangle
    std::cout << "Rectangle(2, 4.5) is a standard rectangle\n";
    Rectangle r4(2, 4.5);
    r4.print();
    std::cout << std::endl;

    double a, b;
    std::cout << "Enter a rectangle's two sides:\n";
    std::cin >> a >> b;
    Rectangle r5 = Rectangle(a, b);
    std::cout << "Information about this rectangle:\n";
    r5.print();
    return 0;
}

