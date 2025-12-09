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
    vector<int> userArr;

    for (int i = 1; i <= n; i++)
    {
        userArr.push_back(i);
    }

    // 2.
    int start = 0, end = userArr.size()-1;

    // 3
    while (start <= end)
    {
        // 4
        swap(userArr[start++], userArr[end--]);
    }

    // 5
    for (int i = 0; i < userArr.size(); i++)
    {
        cout<< userArr[i] << ' ';
    }
    cout<< '\n';
    
    return 0;
}