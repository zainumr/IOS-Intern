#include <iostream>
#include <vector>
using namespace std;

double xPowN(double x, int n){
   
    double ans = 1;
    long binaryNum = n;
    
    while(binaryNum > 0)
    {
        if (binaryNum % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binaryNum /= 2;
        
    }

    return ans;

}

int main()
{

/*
     Binary Exponention

     1. BE me hum power ki binary form pe loop chlaty hain.
     eg. X^n to convert decimal to binary n = log (base 2) n+1

     2. hamesha n number ki binary form me log n digits honge to time complexity O(log n) hogi


*/

    int n = 10;
    double x = 2.0000;

    cout<< xPowN(x, n) << "\n";
        
}