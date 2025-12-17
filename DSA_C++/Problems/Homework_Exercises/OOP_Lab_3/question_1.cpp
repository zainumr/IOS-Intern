#include <iostream>
#include <vector>
using namespace std;

/*
    ================= Problem 1 : Pointers =================
    Write a program that:
    1. Declare an array of 6 integers: {2, 4, 6, 8, 10, 12}
    2. Declare a pointer int *ptr and make it point to the first element of the array.
    3. Use pointer arithmetic (not array indexing) to:
        . Print all elements
    4. Find the sum of all elements
    6. Find the average.
*/

int main()
{
  // 1
    int arr[6] = {2,4,6,8,10,12};

    // 2
    int *ptr = arr;
    // cout<< *ptr << '\n';

    // 3
    int i = 0;
    while (i < 6)
    {
         cout<< *(ptr+i) << '\n';
         i++;
    }

    // 4
    int j = 0, sum = 0;
    while (j < 6)
    {
        sum += *(ptr+j);
        j++;
    }
    cout<< "Sum = " << sum << '\n';

    // 5
    int avg = sum/6;
    cout<< "Avg = " << avg << '\n';
     
    return 0;
}