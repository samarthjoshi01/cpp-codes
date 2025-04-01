#include <iostream>
using namespace std;

class A {
public:
    A(int x) {  // Parameterized constructor
        cout << "Constructor of A called with x = " << x << endl;
    }
};

class B : public A {
public:
    B(int x, int y) : A(x) {  // Explicitly calling A's constructor with x
        cout << "Constructor of B called with y = " << y << endl;
    }
};

class C : public B {
public:
    C(int x, int y, int z) : B(x, y) {  // Explicitly calling B's constructor, which calls A's constructor
        cout << "Constructor of C called with z = " << z << endl;
    }
};

int main() {
    C obj(1, 2, 3);  // Creating an object of class C with parameters for A, B, and C
    return 0;
}
