#include <iostream>
using namespace std;

int main()
{
/*  Write a program that calculates sum of array elements where array elements can be accessed
    using a pointer to an array?
*/
    int arr[5] = {1,2,3,4,5};
    int* arrPtr = arr;
    int n = 5;
    int sum = 0;

    for (int i=0; i<n; i++)
    {
        sum += *(arrPtr + i);
    }
    
    cout << sum << '\n';
    // cout << arrPtr[1] << '\n';
    // cout << arrPtr+0 << '\n';
    // cout << arrPtr+1 << '\n';
    
    
    return 0;
}