#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    double value1, value2;

public:
    // Function to get data
    void get_data(double v1, double v2)
    {
        value1 = v1;
        value2 = v2;
    }
    // Virtual function to display area
    virtual void display_area()
    {
        cout << "Area computation is not defined for base class Shape." << endl;
    }
};
// Derived class for Triangle
class Triangle : public Shape
{
public:
    // Overridden function to display area
    void display_area() override
    {
        double area = 0.5 * value1 * value2; // Area of triangle = 0.5 * base * height
        cout << "Area of the Triangle: " << area << endl;
    }
};
// Derived class for Rectangle
class Rectangle : public Shape
{
public:
    // Overridden function to display area
    void display_area() override
    {
        double area = value1 * value2; // Area of rectangle = length * width
        cout << "Area of the Rectangle: " << area << endl;
    }
};
int main()
{
    Shape *shapePtr; // Pointer to base class
    char choice;
    cout << "Enter 'T' for Triangle or 'R' for Rectangle: ";
    cin >> choice;
    if (choice == 'T' || choice == 't')
    {
        Triangle triangle;
        shapePtr = &triangle;
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        shapePtr->get_data(base, height); // Initialize values
        shapePtr->display_area();         // Display area
    }
    else if (choice == 'R' || choice == 'r')
    {
        Rectangle rectangle;
        shapePtr = &rectangle;
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        shapePtr->get_data(length, width); // Initialize values
        shapePtr->display_area();          // Display area
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
