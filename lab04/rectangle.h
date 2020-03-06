#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
    double a, b;
public:
    Rectangle(double a=0, double b=0);
    // const makes the this pointer is constant, 
    // so we can't accidentally change the object in this function
    double Perimeter() const;
    double Area() const;
    void print() const;
    // getters
    double getA() const { return a; }
    double getB() const { return b; }
};

#endif /* !RECTANGLE_H */
