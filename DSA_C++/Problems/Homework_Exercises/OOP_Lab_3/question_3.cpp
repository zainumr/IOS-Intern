#include <iostream>
using namespace std;

void calculate(int arr[], int sz, int sum, float avg)
{
    for (int i = 0; i < sz; i++)
    {
        sum += *(arr + i);
    }

    avg = sum/sz;

    cout<< "Sum = " << sum << ", Avg = " << avg << '\n';
    
}

/*
    ================= Problem 3 : Pointers =================
    1. Create a function void calculate(int *arr, int size, int *sum, float *avg) that:
    ➢ Uses pointer arithmetic to calculate the sum and average of array elements.
    ➢ Stores results in the variables pointed by sum and avg.
    In main():
    ➢ Input 6 integers into an array.
    ➢ Call calculate() with proper arguments.
    ➢ Print sum and average.
*/

int main()
{

    int arr[] = {5,10,15,20,25};
    int sz = 5;
    int sum = 0;
    float avg = 0;

    calculate(arr, sz, sum, avg);

    return 0;
}