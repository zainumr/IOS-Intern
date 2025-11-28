#include <iostream>
#include <vector>
using namespace std;

string checkPrime(int *ptrNum)
{
    int n = *ptrNum;
    // bool isPrime = true;

    for (int i=2; i*i<=n; i++)
    {
        if (n%2 == 0)
        {
            return "false";
        }
        
    }
    
    return "true";
}

int main()
{
/*
    ================= Problem 5 =================
    Write a program for passing pointer to a function primaryCheck() while returns true if number
    is prime
    otherwise return false.
*/
    int num = 2;
    int* ptrNum = &num;

    cout << checkPrime(ptrNum) << '\n';
    return 0;
}