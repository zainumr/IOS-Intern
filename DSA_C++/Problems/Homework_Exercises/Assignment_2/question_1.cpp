#include <iostream>
#include <vector>
using namespace std;

int main()
{

/*
    Write a program that:
    1. Declares an integer variable x and initializes it with any value.
    2. Creates a pointer to x.
    3. Prints:
    • The value of x
    • The address of x
    • The value at the pointer (dereferencing)
    4. Change the value of x using the pointer only, and print the updated value.
    
*/

    // 1
    int x = 5;

    // 2
    int* ptrX = &x;

    // 3
    // cout<< x << '\n'; // 5
    cout<< ptrX << '\n'; // address of x
    // cout<< *ptrX << '\n'; // 5

    // 4
    ptrX += 1;
    cout<< ptrX << '\n'; 
    cout<< *ptrX << '\n'; 




    return 0;
}