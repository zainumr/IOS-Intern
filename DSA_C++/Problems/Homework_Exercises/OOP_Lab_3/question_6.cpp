#include <iostream>
using namespace std;

int main()
{

/*
    ================= Problem 6 : Merger =================
    • Input 10 integers into an array.
    • Declare a pointer int *p to traverse the array.
    • Ask the user for a value to search and a value to replace it with.
    • Using only pointers (no array indexing):
    ➢ Traverse the array
    ➢ If the search value is found, replace it with the new value.
    • Print the final array.
*/
    int searchVal, replaceVal;
    cout<< "Enter search number: ";
    cin>> searchVal;
    cout<< "Enter replace number: ";
    cin>> replaceVal;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int* p = arr;
    int sz = 10;

    for (int i = 0; i < sz; i++)
    {
        if (*(p + i) == searchVal)
        {
            *(p+ i) = replaceVal;
        }
    }

    for (int val : arr)
    {
        cout<< val << ' ';
    }

    cout<< '\n';

    return 0;
}