#include <iostream>
#include <vector>
using namespace std;

int main()
{
/*
    ================= Problem 3 =================
    Write a program that takes two integers from the user and swaps their values using only
    pointers (no third variable).
    Example:
    Input: a = 5, b = 10
    Output: a = 10, b = 5.
*/
    int a, b;
    cout<< "Enter a =  ";
    cin>> a;
    cout<< "Enter b = ";
    cin>> b;

    int* ptrA = &b;
    int* ptrB = &a;

    cout<< "a = " << *ptrA << '\n';
    cout<< "b = " << *ptrB << '\n';

    return 0;
}