#include <iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    int seconds;

public:
    time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void add(time o1, time o2)
    {
        int carry;
        seconds = (o1.seconds + o2.seconds) % 60;
        carry = (o1.seconds + o2.seconds) / 60;
        minutes = (o1.minutes + o2.minutes + carry) % 60;
        carry = (o1.minutes + o2.minutes + carry) / 60;
        hours = o1.hours + o2.hours + carry;
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};
int main()
{
    time o1(4, 120, 50), o2(3, 0, 50), o3;
    o3.add(o1, o2);
    o3.display();
    return 0;
}
