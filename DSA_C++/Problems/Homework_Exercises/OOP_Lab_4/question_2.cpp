#include <iostream>
using namespace std;

int main()
{

/*
    ================= Problem 2: Dynamic 1D Array =================
    1. Ask the user to enter the size of the array.
    2. Dynamically allocate an integer array of that size.
    3. Take input from the user for all elements.
    4. Print all elements, their sum, and the average.
*/

    // 1
    int n;
    cout<< "Enter size of array: ";
    cin>> n;

    // 2
    int* arr = new int[n];

    // 3
    int val;
    cout<< "Enter 5 numbers: ";
    for (int i = 1; i <= n; i++)
    {
        cin>> val;
        arr[i] = val;
    }

    // 4
    int sum = 0;

    // Elements
    cout<< "Elements: ";
    for (int i = 1; i <= n; i++)
    {
        cout<< arr[i] << ' ';
        sum += arr[i];
    }
    cout<< '\n';

    // Sum
    cout<< "Sum: " << sum << '\n';

    // Avg
    int avg = sum/n;
    cout<< "Avg: " << avg << '\n';
    
    return 0;
}