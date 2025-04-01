#include <iostream>
#include <string>
using namespace std;
class UserTwo;
class UserOne
{
private:
    string Name, FatherName, MotherName, Gender;

public:
    void InputInfo()
    {
        cout << "Enter details for UserOne:" << endl;
        cout << "Name: ";
        getline(cin, Name);
        cout << "Father's Name: ";
        getline(cin, FatherName);
        cout << "Mother's Name: ";
        getline(cin, MotherName);
        cout << "Gender (M/F): ";
        cin >> Gender;
        cin.ignore();
    }
    friend void UserChecker(const UserOne &user1, const UserTwo &user2);
};
class UserTwo
{
private:
    string Name, FatherName, MotherName, Gender;

public:
    void InputInfo()
    {
        cout << "Enter details for UserTwo:" << endl;
        cout << "Name: ";
        getline(cin, Name);
        cout << "Father's Name: ";
        getline(cin, FatherName);
        cout << "Mother's Name: ";
        getline(cin, MotherName);
        cout << "Gender (M/F): ";
        cin >> Gender;
        cin.ignore();
    }
    friend void UserChecker(const UserOne &user1, const UserTwo &user2);
};

void UserChecker(const UserOne &user1, const UserTwo &user2)
{
    if (user1.FatherName == user2.FatherName && user1.MotherName == user2.MotherName)
    {
        cout << "Belongs to the same family." << endl;

        if (user1.Gender == "M" && user2.Gender == "M")
        {
            cout << "We are Brothers." << endl;
        }
        else if (user1.Gender == "F" && user2.Gender == "F")
        {
            cout << "We are Sisters." << endl;
        }
        else
        {
            cout << "We are Brother and Sister." << endl;
        }
    }
    else
    {
        cout << "Belongs to different families." << endl;
    }
}
int main()
{
    UserOne user1;
    UserTwo user2;
    user1.InputInfo();
    user2.InputInfo();
    UserChecker(user1, user2);
    return 0;
}
