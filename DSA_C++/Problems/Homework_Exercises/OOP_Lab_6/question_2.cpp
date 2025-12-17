#include <iostream>
using namespace std;

// 1
class Rectangle
{
private:
    int length;
    int width;
public:

    // 2
    Rectangle()
    {
        length = 0;
        width = 0;
    };

    // square
    Rectangle(int side)
    {
        length = side;
        width = side;
    };

    // rectangle
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    };

    int area()
    {
        return length * width;
    }

    void display()
    {
        cout<< area() << '\n';
    }
};

/*
    ================= Problem 2: Constructor Overloading =================
    Create a C++ program:
    1. Make a class Rectangle with length and width.
    2. Provide 3 constructors:
        . Default (length=0, width=0).
        . One parameter (square).
        . Two parameters (rectangle).
    3. Display area for each object.
        • (No user input required – just demonstrate all 3.)
*/


int main()
{
    Rectangle a1;
    Rectangle a2(5);
    Rectangle a3(5, 8);

    cout<< "Rectangle 1 Area: ";
    a1.display();

    cout<< "Rectangle 2 Area: ";
    a2.display();

    cout<< "Rectangle 3 Area: ";
    a3.display();
    

    return 0;
}