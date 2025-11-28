#include <iostream>
#include <vector>
using namespace std;

int main()
{
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
    // 1
    int num = 50;

    // 2
    int* p = &num;

    // 3
    int** pp = &p;

    // 4
    cout<< "num = " << num << '\n';
    cout<< "*p = " << *p << '\n';
    cout<< "**p = " << **pp << '\n';

    // cout<< "address of num = " << &num << '\n';
    // cout<< "pointer p points to num's address = " << p << '\n';
    // cout<< "address of pointer p = " << &p << '\n';
    // cout<< "dereference p will points the value of nums = " << *p << '\n';
    // cout<< '\n';
    // cout<< "double pp points to p's address = " << pp << '\n';
    // cout<< "address of double pointer pp = " << &pp << '\n';
    // cout<< "dereference pp will points the address of nums  = " << *pp << '\n';
    // cout<< "double dereference pp will points the value of nums  = " << **pp << '\n';

    // 5
    **pp = 65;
    cout<< num << '\n';


    return 0;
}