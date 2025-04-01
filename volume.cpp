#include <iostream>
using namespace std;
class CAL_VOLUME
{
public:
    float v, r, h;

public:
    void getdata()
    {
        cout << "enter the radius:";
        cin >> r;
        cout << "enter the height";
        cin >> h;
    }
    virtual void display_vol() = 0;
};
class cone : public CAL_VOLUME
{
public:
    void display_vol()
    {
        v = (1.0 / 3) * 3.14 * r * r * h;
        cout << "volume of cone is :" << v;
    }
};
class hemisphere : public CAL_VOLUME
{
public:
    void display_vol()
    {
        v = (2.0 / 3) * 3.14 * r * r * r;
        cout << "volume of hemisphere is" << v<<endl;
    }
};
class cylinder : public CAL_VOLUME
{
public:
    void display_vol()
    {
        v = 3.14 * r * r * h;
        cout << "volume of cylinder is" << v<<endl;
    }
};
int main()
{
    CAL_VOLUME *ptr;
    cylinder ob1;
    ptr = &ob1;
    ptr->getdata();
    ptr->display_vol();
    hemisphere ob2;
    ptr=&ob2;
    ptr->getdata();
    ptr->display_vol();
    cone ob3;
    ptr=&ob3;
    ptr->getdata();
    ptr->display_vol();
}