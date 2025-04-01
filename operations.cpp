#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    void setValue(int v)
    {
        value = v;
    }
    friend Number operator-(const Number &obj);
    friend Number operator++(Number &obj);
    friend Number operator++(Number &obj, int);
    friend Number operator--(Number &obj);
    friend Number operator--(Number &obj, int);
    void display() const
    {
        cout << "Value: " << value << endl;
    }
};
Number operator-(const Number &obj)
{
    Number temp;
    temp.value = -obj.value;
    return temp;
}
Number operator++(Number &obj)
{
    ++obj.value;
    return obj;
}
Number operator++(Number &obj, int)
{
    Number temp = obj;
    obj.value++;
    return temp;
}
Number operator--(Number &obj)
{
    --obj.value;
    return obj;
}
Number operator--(Number &obj, int)
{
    Number temp = obj;
    obj.value--;
    return temp;
}
int main()
{
    Number num, result;
    num.setValue(10);
    cout << "Initial value:" << endl;
    num.display();
    cout << "\nUnary minus (-):" << endl;
    result = -num; // operator-(num)
    result.display();
    cout << "\nPre-increment (++obj):" << endl;
    ++num; // operator++(num)
    num.display();
    cout << "\nPost-increment (obj++):" << endl;
    result = num++; // operator++(num,0)
    result.display();
    num.display();
    cout << "\nPre-decrement (--obj):" << endl;
    --num; // operator--(num)
    num.display();
    cout << "\nPost-decrement (obj--):" << endl;
    result = num--; // operator--(num,0)
    result.display();
    num.display();

    return 0;
}
