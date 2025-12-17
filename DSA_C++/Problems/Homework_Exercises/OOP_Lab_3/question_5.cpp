#include <iostream>
using namespace std;

bool primaryCheck(int *ptrN)
{
    for (int i = 2; i*i <= *ptrN; i++)
    {
        if (*ptrN%i == 0)
        {
            return false;
        }
    }

    return true;
    
}

/*
    ================= Problem 5 : Pointers Function =================
    1. Write a function bool primaryCheck(int *num) that:
        . Takes a pointer to an integer as parameter.
        . Checks whether the value pointed by num is a prime number.
        . Returns true if prime, otherwise false.
    2. In main():
        . Input a number from the user.
        . Pass its address to the function.
        . Print "Prime Number" if the function returns true, otherwise "Not Prime Number".
*/

int main()
{

    int num;
    cout<< "Enter number: ";
    cin>> num;

    int* ptrN = &num;

    if (primaryCheck(ptrN))
    {
        cout<< "Prime Number" << '\n';
    }
    else
    {
        cout<< "Not Prime Number" << '\n';
    }

    return 0;
}