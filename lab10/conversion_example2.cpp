#include <iostream>

// forward declarations
class B;
class C;

class A {
public:
    double d;
    virtual void foo() {}
    A() {}
    A(double d): d(d) {}
    explicit A(const C&) {}
};

class B: public A {
};
class C {
    int i;
    public:
    C(int i): i(i) {}
    operator A() { return A((double)i); }
};

void bar(A a) {
    std::cout << a.d << std::endl;
}

int main() {
    B b;
    C c(128);
    // ugly workaround without the conversion operator
    // bar(*(reinterpret_cast<A*>(&c)));
    bar(c);
    // explicit cast calls the constructor
    bar((A)c);
    A a(c);
    return 0;
}