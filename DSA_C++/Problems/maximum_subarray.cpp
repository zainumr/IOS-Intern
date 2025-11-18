#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Maximum Subarrays Sum using Kadan's Algorithm
    vector<int> arr = {3,-4,5,4,-1,7,-8};

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int val : arr)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }

    cout<< maxSum << "\n";

}