#include <iostream>
using namespace std;
class Area
{
public:
    double calculateArea(double s)
    {
        return s * s;
    }
    double calculateArea(double l, double w)
    {
        return l * w;
    }
    double calculateArea(double b, double h, bool isTri)
    {
        if (isTri)
        {
            return 0.5 * b * h;
        }
        return 0;
    }
};
int main()
{
    Area a;
    double s = 4.0;
    cout << "Square area: " << a.calculateArea(s) << endl;
    double l = 5.0, w = 3.0;
    cout << "Rectangle area: " << a.calculateArea(l, w) << endl;
    double b = 6.0, h = 4.0;
    cout << "Triangle area: " << a.calculateArea(b, h, true) << endl;
    return 0;
}
