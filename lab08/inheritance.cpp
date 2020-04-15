#include <iostream>

class A {
public:
    A() {std::cout << "A default constructor\n";}
    ~A() {std::cout << "A destructor\n";}
};

class B: public A {
public:
    B() {std::cout << "B default constructor\n";}
    ~B() {std::cout << "B destructor\n";}
};

int main() {
    std::cout << "hello" << std::endl;
    B b;
    std::cout << "goodbye" << std::endl;
    return 0;
}