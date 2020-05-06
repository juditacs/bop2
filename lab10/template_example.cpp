#include <iostream>

template <typename T>
T myMax(T a, T b) {
    if (a<b) return b;
    return a;
}

class A{};

int main() {
    std::cout << myMax(2, 3) << std::endl;
    std::cout << myMax<double>(2, 3.5) << std::endl;
    int i=0, j=10;
    int *pi = &i, *pj = &j;
    std::cout << myMax(pi, pj) << std::endl;
    char c;
    char *pc = &c;

    // discouraged but possible
    void* v = static_cast<void*>(pi);
    std::cout << myMax(v, static_cast<void*>(pc)) << std::endl;

    std::cout << myMax<void*>(pi, pc) << std::endl;
    return 0;
}