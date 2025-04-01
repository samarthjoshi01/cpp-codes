#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
// Custom exception classes
class InvalidNameException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Error: Employee name must start with a capital letter.";
    }
};
class InvalidEmployeeIdException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Error: Employee ID must be between 2001 and 5001.";
    }
};
class InvalidDepartmentIdException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Error: Department ID must be an integer between 1 and 5.";
    }
};
// Employee class
class Employee
{
private:
    int employeeId;
    string name;
    int departmentId;

public:
    // Function to input employee details
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        if (employeeId < 2001 || employeeId > 5001)
        {
            throw InvalidEmployeeIdException();
        }
        cout << "Enter Employee Name: ";
        cin.ignore(); // To handle newline character left in the input buffer
        getline(cin, name);
        if (name.empty() || !isupper(name[0]))
        {
            throw InvalidNameException();
        }
        cout << "Enter Department ID: ";
        cin >> departmentId;
        if (departmentId < 1 || departmentId > 5)
        {
            throw InvalidDepartmentIdException();
        }
    }
    // Function to display employee details
    void displayDetails() const
    {
        cout << "\nEmployee Details:\n";
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Department ID: " << departmentId << endl;
    }
};
int main()
{
    Employee emp;
    try
    {
        // Input and display employee details
        emp.inputDetails();
        emp.displayDetails();
    }
    catch (const exception &e)
    {
        // Handle exceptions
        cerr << e.what() << endl;
    }
    return 0;
}
