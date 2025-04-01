#include <iostream>
using namespace std;
class TollBooth
{
private:
    unsigned int cars;
    double cash;

public:
    TollBooth()
    {
        cars = 0;
        cash = 0.0;
    }
    void payingCar()
    {
        cars++;
        cash += 0.5;
    }
    void nonPayCar()
    {
        cars++;
    }
    void display()
    {
        cout << "Total cars: " << cars << endl;
        cout << "Total cash: Rs" << cash << endl;
    }
};
int main()
{
    TollBooth tollBooth;
    int choice;
    cout << "TollBooth Program" << endl;
    cout << "1. Add Paying Car" << endl;
    cout << "2. Add Non-Paying Car" << endl;
    cout << "3. Display Totals and Exit" << endl;
    while (true)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            tollBooth.payingCar();
            cout << "Paying car added.\n";
        }
        else if (choice == 2)
        {
            tollBooth.nonPayCar();
            cout << "Non-paying car added.\n";
        }
        else if (choice == 3)
        {
            cout << "\nFinal Totals:\n";
            tollBooth.display();
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
