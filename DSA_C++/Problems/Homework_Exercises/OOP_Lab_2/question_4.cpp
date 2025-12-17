#include <iostream>
#include <vector>
using namespace std;

/*
    ================= Problem 4 =================
    Write a program that:
    1. Declares an integer variable num and initializes it with 50.
    2. Creates a pointer p to num.
    3. Creates a double pointer pp to p.
    4. Prints:
        • Value of num using variable
        • Value of num using single pointer p
        • Value of num using double pointer pp
    5. Ask the user to update the value of num using the double pointer only, then print the new
    Value.
*/

int main()
{
    // 1
    int num = 50;

    // 2
    int* p = &num;

    // 3
    int** pp = &p;

    // 4
    cout<< "num = " << num << '\n';
    cout<< "pointer p = " << *p << '\n';
    cout<< "double pointer pp = " << **pp << '\n';

    // 5
    int newVal;
    cout<< "Enter new value: ";
    cin>> newVal;
    **pp = newVal;
    cout<< num << '\n';


    return 0;
}