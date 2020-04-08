#include <iostream>
#include <cmath>

class Coordinate {
    double x, y;
public:
    Coordinate(double x=0, double y=0): x(x), y(y) {}
    Coordinate operator+(const Coordinate& rhs) const {
        Coordinate sum(0, 0);
        sum.x = this->x + rhs.x;
        sum.y = this->y + rhs.y;
        return sum;
        // can be done in one line
        // return Coordinate(this->x+rhs.x, this->y+rhs.y);
    }
    // operator- with two operands: c1 - c2
    Coordinate operator-(const Coordinate& rhs) const;
    // operator- with one operand: -c1
    Coordinate operator-() const;
    // dot product
    double operator*(const Coordinate& rhs) const;
    // Euclidean norm
    double abs() const;
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& c);
    // multiplying with a double
    friend Coordinate operator*(const Coordinate& lhs, double rhs);
};

// double * Coordinate can use Coordinate * double 
// since this operator is commutative
// it doesn't even have to be a friend
Coordinate operator*(double lhs, const Coordinate& rhs) {
    return rhs * lhs;
}

int main(void) {
    Coordinate c1(3, 2), c2(1, -3);
    Coordinate c3;
    c3 = c2 - c1;
    // should: c1: {3, 2} c2: {1, -3} c3: {-2, -5}
    std::cout << "c1: " << c1 << " c2: " << c2 << " c3: " << c3 << std::endl;
    // should: c1+c2: {4, -1}
    std::cout << "c1+c2: " << c1 + c2 << std::endl;
    // c2-c1: {-2, -5}
    std::cout << "c2-c1: " << c3 << std::endl;
    // c3*c1: -16
    std::cout << "c3*c1: " << c3 * c1 << std::endl;
    // 5.5 * c2: {5.5, -16.5}
    std::cout << "5.5 * c2: " << 5.5 * c2 << std::endl;
    // c2 * 5.5: {5.5, -16.5}
    std::cout << "c2 * 5.5: " << c2 * 5.5 << std::endl;
    // -c2: {-1, 3}
    std::cout << "-c2: " << -c2 << std::endl;
    // abs(c2): 3.16228
    std::cout << "abs(c2): " << c2.abs() << std::endl;
    return 0;
}