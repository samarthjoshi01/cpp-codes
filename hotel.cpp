#include <iostream>
#include <string>
using namespace std;
class Hotel
{
private:
    int Rno;
    string Name;
    float Tariff;
    int NOD;
    float CALC()
    {
        float amount = NOD * Tariff;
        if (amount > 10000)
        {
            amount *= 1.05; // Add 5% extra if amount > 10000
        }
        return amount;
    }

public:
    void Checkin()
    {
        cout << "Enter Room Number: ";
        cin >> Rno;
        cin.ignore(); // To clear the input buffer
        cout << "Enter Customer Name: ";
        getline(cin, Name);
        cout << "Enter Tariff (per day charges): ";
        cin >> Tariff;
        cout << "Enter Number of Days of Stay: ";
        cin >> NOD;
        cin.ignore();
    }
    void Checkout()
    {
        cout << "\nRoom Number: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff (Per Day): " << Tariff << endl;
        cout << "Number of Days Stayed: " << NOD << endl;
        cout << "Total Amount: " << CALC() << endl;
    }
};
int main()
{
    Hotel h1;
    h1.Checkin();
    h1.Checkout();
    return 0;
}
