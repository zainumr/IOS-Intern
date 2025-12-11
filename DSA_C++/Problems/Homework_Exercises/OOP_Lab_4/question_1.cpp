#include <iostream>
using namespace std;

int main()
{

/*
    ================= Problem 1 : Dynamic Variables =================
    1. Dynamically allocate an integer variable using new.
    2. Store a number (entered by user) in it.
    3. Print the value and the memory address.
    4. Finally, release the memory using delete.
*/
    // 1
    int* a = new int();

    // 2
    cout<< "Enter number: " ;
    cin>> *a;

    // 3
    cout<< *a << '\n';
    cout<< &a << '\n';

    // 4
    delete a;
    cout<< *a << '\n'; // 0

    return 0;
}