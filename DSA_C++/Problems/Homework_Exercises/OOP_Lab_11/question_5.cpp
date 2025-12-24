#include <iostream>
using namespace std;

class Box
{
private:
    int length, width;
public:
    void inputBox()
    {
        cout<< "Enter Box Length: ";
        cin>> length;
        cout<< "Enter Box Width: ";
        cin>> width;
    }

    friend void displayArea(Box b);
};

void displayArea(Box b)
{
    cout<< "Area: " << b.length * b.width << '\n';
}

/*
    ================= Problem: 5 =================
    Class 1: Box
        •	Data Members:
        •	int length
        •	int width
        •	Member Functions:
        •	void inputBox() – take length and width
        •	Declare friend void displayArea(Box b);

    Friend Function: void displayArea(Box b)
        •	Access private members of Box to calculate and display the area.

    Program Requirements
        •	Declare a friend function displayArea() inside class Box.
        •	Define it outside the class and calculate area = length * width.
        •	Call displayArea() from main() using a Box object.

*/

int main()
{
    Box b;
    b.inputBox();
    cout<< '\n';
    displayArea(b);


    return 0;
}