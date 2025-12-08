#include <iostream>
#include <vector>
using namespace std;

int main()
{

/*
    ================= Problem 2 : Pointers =================
    1. Take n integers from the user into an array.
    2. Declare two pointers start and end that point to the first and last element of the array.
    3. Swap the elements pointed by start and end.
    4. Move the pointers (start++ and end--) until the array is reversed.
    5. Print the reversed array.
*/
    int n;
    cout<< "Enter number: ";
    cin>> n;
    int userArr[n];

    // 2.
    int *start = userArr;
    int* end = userArr;

    cout<< *start << '\n';
    

    
    
    return 0;
}