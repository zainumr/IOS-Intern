#include <iostream>
#include <vector>
using namespace std;

/*
    ================= Problem 3 =================
    Write a program that takes two integers from the user and swaps their values using only
    pointers (no third variable).
    Example:
    Input: a = 5, b = 10
    Output: a = 10, b = 5.
*/

int main()
{

    int a, b;
    cout<< "Enter a: ";
    cin>>a;
    cout<< "Enter b: ";
    cin>>b;

    cout<< "a = " << a << " " <<  "b = " << b << '\n';
    int* ptrA = &b;
    int* ptrB = &a;
    a = *ptrA;
    b = *ptrB;
    cout<< "a = " << a << " " <<  "b = " << b << '\n';

    return 0;
}