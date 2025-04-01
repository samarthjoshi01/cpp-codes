#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    complex(int a = 0, int b = 0)
    {
        r = a;
        i = b;
    }

    void show()
    {
        cout << r << "+i" << i << '\n';
    }

    friend complex operator+(complex &, complex &);
    friend complex operator-(complex &, complex &);
};
complex operator-(complex &o1, complex &o2)
{
    complex temp;
    temp.r = o1.r - o2.r;
    temp.i = o1.i - o2.i;
    return temp;
}
complex operator+(complex &o1, complex &o2)
{
    complex temp;
    temp.r = o1.r + o2.r;
    temp.i = o1.i + o2.i;
    return temp;
}
int main()
{
    complex o1(10, 20), o2(8, 5), o3, o4;
    o3 = o1 + o2; // operator+(o1,o2) ;//o1.operator+(o2);
    o4 = o1 - o2;
    o3.show();
    o4.show();

    return 0;
}
