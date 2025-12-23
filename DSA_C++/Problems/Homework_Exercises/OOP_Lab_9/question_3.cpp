#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    void display()
    {
        cout<< "Rectangle Details:\n";
        cout<< "Length = " << length << '\n';
        cout<< "Width = " << width << '\n';
        cout<< "Area = " << area() << '\n';
    }

    Rectangle(int l, int w) : length(l), width(w) 
    {
        
    }

    int area()
    {
        return length*width;
    }
    
};


/*
    ================= Problem 3: Initializer List =================
    Create a C++ program to demonstrate the use of an initializer list to initialize class data 
    members at the time of object creation.

    1. Class Name: Rectangle
        -> Data Members
            • int length — to store the length of the rectangle
            • int width — to store the width of the rectangle
        -> Member Functions
            • void display() — to display length, width, and area of the rectangle
        -> Constructors
            • Parameterized Constructor (using initializer list) — to initialize both data 
            members at the time of object creation
    
    Program Requirements
    1. Create a class Rectangle with the data members and functions mentioned above.
    2. Use an initializer list in the constructor to assign values to length and width.
    3. Create an object of Rectangle by passing values for both data members.
    4. Display the rectangle’s details using the display() function.
*/

int main()
{
    int length, width;

    cout<< "Enter Length: ";
    cin>> length;

    cout<< "Enter Width: ";
    cin>> width;

    Rectangle r(length, width);
    r.display();

    return 0;
}