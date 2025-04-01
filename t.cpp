#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        std::cout << "Base class default constructor called.\n";
    }
    Base(int x) {
        std::cout << "Base class parameterized constructor called with value: " << x << "\n";
    }
};

class Derived : public Base {
public:
    // Constructor calling the default constructor of the base class
    /*Derived() {
        std::cout << "Derived class default constructor called.\n";
    }*/

    // Constructor calling the parameterized constructor of the base class
    Derived(int y) {
      
        cout << "Derived class parameterized constructor called with value: " << y << "\n";
    }
};

int main() {
        // Calls the default constructor of Base, then Derived
    Derived obj2(10);   // Calls the parameterized constructor of Base, then Derived
    return 0;
}
