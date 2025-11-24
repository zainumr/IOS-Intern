#include <iostream>
#include <vector>
using namespace std;

int sumFunc(vector<int>* arrPtr){
    int sum = 0;

    for (int i=0; i<arrPtr->size(); i++)
    {
        sum += (*arrPtr)[i];
    }
    
    return sum;
}

int avgFunc(vector<int>* arrPtr)
{
    int avg = 0;
    
    avg = sumFunc(arrPtr) / arrPtr->size();
    return avg;
}

int main()
{
/*  
    Question #03
    Define an integer pointer array of 10 numbers. Initialize them to any integer values from the key
    board. Find the sum and average of these 10 integers.
*/
    vector<int> arr = {12,20,30,40};
    vector<int>* arrPtr = &arr;

    cout<< "Sum = " << sumFunc(arrPtr) << '\n';
    cout<< "Avg = " << avgFunc(arrPtr) << '\n';

    return 0;

}