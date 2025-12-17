#include <iostream>
using namespace std;

void display()
{
    static int a = 5;
    // int a = 5;
    a++;

    cout<< a << '\n';
}

/*
    ================= Static Keyword =================
    1. It changes the lifetime scope of a variable or fuction depending on where it is used.
*/

int main()
{
    display();
    display();
    display();

    return 0;
}