#include <iostream>
using namespace std;


// Decimal to Binary conversion
int decimalTobinary(int n)
{
    int binaryNum = 0;
    int power = 1;

    while (n > 0)
    {
        int remainder = n%2;
        n = n/2;
        binaryNum += (remainder * power);
        power *= 10;

    }
    return binaryNum;
}

// Binary to decimanl conversion
int binaryTodecimal(int n)
{
    int decimalNum = 0;
    int power = 1;

    while (n > 0)
    {
        int remainder = n%10;
        n /= 10;
        decimalNum += (remainder * power);
        power *= 2;

    }
    return decimalNum;
}

int main()
{
    cout << binaryTodecimal(100) << endl; 


}