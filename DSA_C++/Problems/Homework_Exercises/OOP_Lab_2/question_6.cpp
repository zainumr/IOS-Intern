#include <iostream>
#include <vector>
using namespace std;

void printVal(int x, int *p, int **pp)
{
    cout<< "x = " << x << '\n';
    cout<< "p = " << *p << '\n';
    cout<< "pp = " << **pp << '\n';
}

void changeValX(int **pp)
{
    **pp = 100;
    cout<< "x = " << **pp << '\n';
}

void increaseY(int y)
{
    int* p = &y;
    *p += 10;
    cout<< "y = " << *p << '\n';
}

void swapXY(int x, int y)
{
    int* ptrX = &y;
    int* ptrY = &x;

    cout<< "x = " << *ptrX << '\n';
    cout<< "y = " << *ptrY << '\n';
}

int main()
{
/*
    ================= Problem 6 =================
    Write a C++ program that performs the following tasks using functions with pointers and double
    pointers:
    1. Declare two integers x = 30 and y = 40.
    2. Create a pointer p to x and a double pointer pp to p.
    3. Write a function to print the value of x using: the variable itself, the pointer p and
    the double pointer pp.
    4. Write a function to change the value of x to 100 using the double pointer.
    5. Write a function to point p to y and then increase the value of y by 10 using only the pointer.
    6. Write a function to swap the values of x and y using only pointers (do not use a third variable).
    7. In the main() function, call all the above functions in sequence and finally print the values
    of x and y
*/
    // 1
    int x = 30, y = 40;

    // 2 
    int* p = &x;
    int** pp = &p;

    // 3
    printVal(x, p, pp);

    // 4
    changeValX(pp);

    // 5
    increaseY(y);

    // 6
    swapXY(x, y);

    // 7 
    cout<< "x = " << x << ", y = " << y << '\n';


    return 0;
}