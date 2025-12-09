#include <iostream>
using namespace std;

void findMax(int arr[], int sz)
{
    int max = *arr;
    for (int i = 0; i < sz; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        } 
    }
    cout<< "Max = " << max << '\n';
}

int main()
{

/*
    ================= Problem 4 : Pointers =================
    1. Create a function int findMax(int *arr, int size) that uses only pointer arithmetic (no
    arr[i]) to find and return the largest element.
    2. In main():
    ➢ Input 8 integers into an array.
    ➢ Call the function and display the maximum.
*/
    int arr[] = {3,9,1,7,2,8,6,5};
    int sz = 8;

    findMax(arr, sz);
    
    return 0;
}