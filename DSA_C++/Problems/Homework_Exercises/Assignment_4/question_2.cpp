#include <iostream>
using namespace std;

class Polygon
{
protected:
    float length, width;
public:
    Polygon() : length(0), width(0) {}
    Polygon(float l, float w) : length(l), width(w) {}

    virtual float area() = 0;
    virtual float perimeter() = 0;
    virtual void display() = 0;

    virtual ~Polygon() {}

};

class Square : public Polygon
{
public:
    Square() {}

    Square(float side) : Polygon(side, side) {}

    float area()
    {
        return length * length;
    }

    float perimeter()
    {
        return 4 * length;
    }

    void display()
    {
        cout<< "Area of Square = " << area() << '\n'; 
        cout<< "Perimeter of Square = " << perimeter() << '\n'; 

    }

    ~Square() {}

};

class Rectangle : public Polygon
{
public:
    Rectangle() {}

    Rectangle(float length, float width) : Polygon(length, width) {}

    float area()
    {
        return 2 * (length * width);
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout<< "Area of Rectangle = " << area() << '\n'; 
        cout<< "Perimeter of Rectangle = " << perimeter() << '\n'; 
    }

    ~Rectangle() {}

};

class Triangle : public Polygon
{
public:
    Triangle() {}
    Triangle(float base, float height) : Polygon(base, height) {}

    float area()
    {
        return (length * width) / 2;
    }

    float perimeter()
    {
        float hypotenuse = sqrt(length * length + width * width);
        return length + width + hypotenuse;
    }

    void display()
    {
        cout<< "Area of Triangle = " << area() << '\n'; 
        cout<< "Perimeter of Triangle = " << perimeter() << '\n'; 
    }

     ~Triangle() {}

};








/*
    ================= Problem: 1 =================
    Finding the areas of Polygon family (Square+Rectangle+Triangle) using Polymorphism and Virtual 
    function

    Define a base class Polygon having the following attributes:
    1. Float length
    2. Float width

    Pure Virtual Member functions:
    1. Float Area() to calculate Area
    2. Float Perimeter() to calculate Perimeter
    3. Void Display() to calculate Display Area and Perimeter

    Define the derived classes and inherit above attributes and function publically:
    1. Square
    2. Rectangle
    3. Triangle

    Task
    1. Write default constructor and Overloaded constructor to overload the values of Length and
    Width.
    2. Calculate the Areas and Perimeters of Polygon family.
    3. Show the results on the console using Display () function.
    4. Write base class pointer “*Bptr” which points to the objects of derived classes and 
    display the area and perimeter of subclass using Static and dynamic binding

    Hint:
    1. Static binding: Using. operator .
    2. Dynamic Binding: Using -> operator

    Hint:
    1. Square Area/Perimeter=4*L
    2. Rectangle A=2*(LxW) P=2*(L+W)
    3. Triangle A= (LxW)/2 P= (L+W+H) .
*/

int main()
{
    Polygon* Bptr1 = new Square(5);
    Polygon* Bptr2 = new Rectangle(4,6);
    Polygon* Bptr3 = new Triangle(3,4);

    Bptr1->display();
    cout<< '\n';

    Bptr2->display();
    cout<< '\n';

    Bptr3->display();

    delete Bptr1;
    delete Bptr2;
    delete Bptr3;
 

    return 0;
}