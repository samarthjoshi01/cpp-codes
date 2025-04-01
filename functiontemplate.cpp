#include <iostream>
using namespace std;
// Function template definition
template <typename T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    // Using the template with integers
    int num1 = 10, num2 = 20;
    cout << "Maximum of " << num1 << " and " << num2 << " is: "
         << findMax(num1, num2) << endl;
    // Using the template with doubles
    double d1 = 5.75, d2 = 2.45;
    cout << "Maximum of " << d1 << " and " << d2 << " is: "
         << findMax(d1, d2) << endl;
    // Using the template with characters
    char c1 = 'a', c2 = 'z';
    cout << "Maximum of '" << c1 << "' and '" << c2 << "' is: '"
         << findMax(c1, c2) << "'" << endl;
    return 0;
}
