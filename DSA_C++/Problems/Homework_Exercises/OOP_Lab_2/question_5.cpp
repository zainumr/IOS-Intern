#include <iostream>
#include <vector>
using namespace std;

string checkPrime(int *ptrNum)
{
    int n = *ptrNum;
    // bool isPrime = true;

    for (int i=2; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            return "false";
        }
        
    }
    
    return "true";
}

/*
    ================= Problem 5 =================
    1. Write a program for passing pointer to a function primaryCheck() while returns true if number
    is prime
    2. otherwise return false.
*/

int main()
{
    int num = 2;
    int* ptrNum = &num;

    cout << checkPrime(ptrNum) << '\n';
    return 0;
}