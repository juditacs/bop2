#include <iostream>

class A {
public:
    virtual ~A() {}
};
class B: public A {};

class C: public A {};

int main() {
    A* pa1 = new A;
    A* pa2 = new B;
    B* pb1 = dynamic_cast<B*>(pa1);
    B* pb2 = dynamic_cast<B*>(pa2);
    C* pc1 = dynamic_cast<C*>(pa1);
    C* pc2 = dynamic_cast<C*>(pa2);
    std::cout << "pb1: " << pb1 << std::endl;
    std::cout << "pb2: " << pb2 << std::endl;
    std::cout << "pc1: " << pc1 << std::endl;
    std::cout << "pc2: " << pc2 << std::endl;
    delete pa1;
    delete pa2;
    return 0;
}