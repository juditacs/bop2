#include <iostream>

using namespace std;

class Noisy {
    int n;
    public:
    Noisy(): n(0) { cout << "Default constructor" << endl; }
    Noisy(int n): n(n) { cout << "Int (conversion) constructor" << endl; }
    Noisy(const Noisy& other): n(other.n) { cout << "Copy constructor" << endl; }
    ~Noisy() { cout << "Destructor" << endl; }

    int getN() const { return n;}
    void setN(int n) {this->n=n;}
    void print() const {
        cout << getN() << endl;
    }
    void printNonConst() {
        cout << getN() << endl;
    }
};

void f1(Noisy n) {
    // n.n; // private!
    cout << n.getN() << endl;
}

void f2(const Noisy& n) {
    // n.setN(14); // cannot call non-const member function
    cout << n.getN() << endl;
}

void f3(Noisy& n) {
    n.setN(14);
    cout << n.getN() << endl;
}

int main(void) {
    Noisy n1(9);
    f2(n1);
    const Noisy n2(11);
    f2(n2);
    // f3(n2); // const Noisy -> non-const reference NOT OK
    return 0;
}