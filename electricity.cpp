#include <iostream>
#include <string>
using namespace std;
float calculateCharges(int units)
{
    float charges = 0;
    if (units <= 100)
    {
        charges = units * 0.60;
    }
    else if (units <= 300)
    {
        charges = (100 * 0.60) + ((units - 100) * 0.80);
    }
    else
    {
        charges = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
    }
    if (charges < 50)
    { // Minimum charge of Rs. 50
        charges = 50;
    }
    if (charges > 300)
    {
        charges += charges * 0.15; // 15% surcharge
    }
    return charges;
}
int main()
{
    int n;
    cout << "Enter the number of users: ";
    cin >> n;
    string name[n];
    int units[n];
    float charges[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of user " << i + 1 << ": ";
        cin >> ws; // To clear any newline character in the buffer
        getline(cin, name[i]);
        cout << "Enter the number of units consumed by " << name[i] << ": ";
        cin >> units[i];
        charges[i] = calculateCharges(units[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // Simple formatting with spaces
        cout << name[i] << " charges are ";
        cout << charges[i] << endl;
    }

    return 0;
}
