#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string name;
    int age;
    string enroll_no;
    float marks;

public:
    // Constructor to initialize Student details
    Student(string n, int a, string en, float m)
    {
        name = n;
        age = a;
        enroll_no = en;
        marks = m;
    }
    void display()
    {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Enrollment No: " << enroll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};
class Faculty
{
protected:
    string facultyName;
    int age;
    string facultyCode;
    double salary;
    string deptt;
    int experience;
    string gender;

public:
    // Constructor to initialize Faculty details
    Faculty(string fn, int a, string fc, double sal, string d, int exp, string g)
    {
        facultyName = fn;
        age = a;
        facultyCode = fc;
        salary = sal;
        deptt = d;
        experience = exp;
        gender = g;
    }
    void display()
    {
        cout << "Faculty Information:" << endl;
        cout << "Name: " << facultyName << endl;
        cout << "Age: " << age << endl;
        cout << "Code: " << facultyCode << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << deptt << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Gender: " << gender << endl;
    }
};
class Person : public Student, public Faculty
{
public:
    // Constructor to initialize both base classes
    Person(string studentName, int studentAge, string enrollNo, float studentMarks,
           string facultyName, int facultyAge, string facultyCode, double facultySalary,
           string department, int facultyExperience, string facultyGender)
        : Student(studentName, studentAge, enrollNo, studentMarks),
          Faculty(facultyName, facultyAge, facultyCode, facultySalary, department, facultyExperience, facultyGender) {}

    void display()
    {
        // Resolve ambiguity using scope resolution
        cout << "Person Information:" << endl;
        Student::display();
        Faculty::display();
    }
};
int main()
{
    Person person("shivam", 20, "EN12345", 88.5,
                  "Dr. samarth", 40, "FC9876", 75000.0, "CS", 15, "Male");
    person.display();
    return 0;
}
