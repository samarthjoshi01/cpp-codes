#include <iostream>
using namespace std;
class Base
{
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;
    Base()
    {
        privateData = 1;
        protectedData = 2;
        publicData = 3;
    }
    void showBaseData()
    {
        cout << "Base Class Data:\n";
        cout << "Private Data: " << privateData << " (Accessible only within Base class)\n";
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};
// Derived class with Public Inheritance
class DerivedPublic : public Base
{
public:
    void showDerivedData()
    {
        cout << "\nDerivedPublic Class Data:\n";
        // cout << "Private Data: " << privateData; // ERROR: Private members are not accessible
        cout << "Protected Data: " << protectedData << endl; // Accessible
        cout << "Public Data: " << publicData << endl;       // Accessible
    }
};
// Derived class with Protected Inheritance
class DerivedProtected : protected Base
{
public:
    void showDerivedData()
    {
        cout << "\nDerivedProtected Class Data:\n";
        // cout << "Private Data: " << privateData; // ERROR: Private members are not accessible
        cout << "Protected Data: " << protectedData << endl;                      // Accessible
        cout << "Public Data: " << publicData << " (Treated as protected now)\n"; // Accessible
    }
};
// Derived class with Private Inheritance
class DerivedPrivate : private Base
{
public:
    void showDerivedData()
    {
        cout << "\nDerivedPrivate Class Data:\n";
        // cout << "Private Data: " << privateData; // ERROR: Private members are not accessible
        cout << "Protected Data: " << protectedData << endl;                    // Accessible
        cout << "Public Data: " << publicData << " (Treated as private now)\n"; // Accessible
    }
};
int main()
{
    Base baseObj;
    baseObj.showBaseData();
    DerivedPublic publicObj;
    publicObj.showDerivedData();
    DerivedProtected protectedObj;
    protectedObj.showDerivedData();
    DerivedPrivate privateObj;
    privateObj.showDerivedData();
    return 0;
}
