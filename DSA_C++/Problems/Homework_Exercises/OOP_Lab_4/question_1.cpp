#include <iostream>
using namespace std;

int main()
{

/*
    ================= Problem 1 : Dynamic Variables =================
    • Dynamically allocate an integer variable using new.
    • Store a number (entered by user) in it.
    • Print the value and the memory address.
    • Finally, release the memory using delete.
*/
    // 1
    int* a = new int();
    cout<< "Enter number: " ;
    cin>> *a;

    // 2
    cout<< *a << '\n';
    cout<< &a << '\n';

    // 3
    delete a;
    cout<< *a << '\n'; // 0

    return 0;
}