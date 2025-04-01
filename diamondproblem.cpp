#include <iostream>
#include <string>
using namespace std;
// Common base class
class Person
{
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void displayPerson()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
// Derived class 1
class Student : virtual public Person
{
protected:
    string studentID;

public:
    // Constructor
    Student(string n, int a, string id) : Person(n, a)
    {
        studentID = id;
    }
    void displayStudent()
    {
        cout << "Student ID: " << studentID << endl;
    }
};
// Derived class 2
class Teacher : virtual public Person
{
protected:
    string employeeID;

public:
    // Constructor
    Teacher(string n, int a, string empID) : Person(n, a)
    {
        employeeID = empID;
    }
    void displayTeacher()
    {
        cout << "Employee ID: " << employeeID << endl;
    }
};
// Derived class 3
class Researcher : public Student, public Teacher
{
private:
    string researchTopic;

public:
    // Constructor
    Researcher(string n, int a, string id, string empID, string topic)
        : Person(n, a), Student(n, a, id), Teacher(n, a, empID)
    {
        researchTopic = topic;
    }
    void displayResearcher()
    {
        displayPerson(); // No ambiguity due to virtual inheritance
        displayStudent();
        displayTeacher();
        cout << "Research Topic: " << researchTopic << endl;
    }
};
int main()
{
    Researcher r("samarth", 30, "S12345", "E98765", "Artificial Intelligence");
    // Display details
    r.displayResearcher();
    return 0;
}
