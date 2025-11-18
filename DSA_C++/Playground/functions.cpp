#include <iostream>
using namespace std;


// sum func
int sum(int a, int b)
{
    int s = a+b;
    return s;
}

// min of 2 numbers func
int minOfTwoNum(int a, int b)
{

    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

// calculate sum of numbers from 1 to N?
int sumN(int n)
{
    int sum = 0;
    for (int i=0; i<=n; i++)
    {
        sum+=i;
    }
    
    return sum;

}

// calculate N factorial?
int facN(int n)
{
    int fac = 1;
    for (int i=1; i<=n; i++)
    {
        fac*=i;
    }
    
    return fac;
}

// calculate sum of digits of a number?
int sumOfDigitOfNum(int n)
{
    int sum = 0;

    while (n>0)
    {
        sum += n%10;
        n = n/10;
        cout<< n << " ";
    }
    return sum;
    
}

// calculate nCr binomial coefficient for n & r?
int nCr(int n, int r)
{
   int nFac = facN(n);
   int rFac = facN(r);
   int nMinsTwoFac = facN(n-r);
   int nCr = nFac / (rFac * nMinsTwoFac); 

   return nCr;
}

// WAF to check if a number is prime or not?
int checkPrime(int n)
{
    bool isPrime = true;

    for (int i = 2; i*i < n; i++)
    {
        if (n%i == 0)
        {
            // cout<< i << " ";
            isPrime = false;
        }
    }
    // cout<< endl;
    return isPrime;   
}

// WAF to print all prime numbers from 1 to N?


int primeNum(int n)
{
    // int primeNum = 0;

    for (int i=2; i<=n; i++)
    {
        bool isPrime = true;
        for (int j=2; j*j<=i; j++)
        {

            if (i%j == 0)
            {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime == true)
        {
            cout << i << " ";
        }
    }
    cout<< endl;
    return 0;
}

// WAF to print nth Fibonacci
/*  
    Fibonacci numbers are the series of numbers starting
    with 0 and 1 where each number is sum of previous two numbers

    eg. Fab = 0 1 1 2 3 5 8 13....
*/

int fibNum(int n)
{
    int a = 0;
    int b = 1;
    int currNum;

    for (int i=2; i<=n; i++)
    {
        currNum = a + b;
        a = b;
        b = currNum;
    }
    return b;
    
}

int main() {

    cout<< fibNum(6) << endl;
    

}