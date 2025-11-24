#include <iostream>
using namespace std;

// Binary search with loop
int binarySearch(vector<int> arr, int targ)
{
    int st = 0, end = arr.size()-1;
    
    while (st <= end)
    {
        int mid = st + (end-st)/2;
        if (targ < arr[mid])
        {
            end = mid-1;
        }
        else if (targ > arr[mid])
        {
            st = mid+1;
        }
        else 
        {
            return mid;
        }

    }
    return -1;
    
}

// Binary search with recursion
int BS(vector<int> arr, int targ, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st)/2;

        if (targ < arr[mid])
        {
            return BS(arr, targ, st, mid-1);
        }
        else if (targ > arr[mid])
        {
            return BS(arr, targ, mid+1, end);
        }
        else
        {
            return mid;
        } 
    }

    return -1;
    
}


int main()
{
/*  
    Binary Search Algorithm

    1. Practical Usage
        . time complexity = O(log n)
        . works only for sorted arrays/strings in ascending/decensding order
    2. Keypoints to apply BS Algo
        . check array/string is sorted in any particular order
        . find mid = st + end / 2 OR mid = st + (end - st)/2 (to get rid of overflow like for large values)
        . compare target with mid
        . if target > mid search 2nd half 
            . update st = mid+1
        . else if target < mid 
            . update end = mid-1
        . else return mid

*/
    vector<int> arr = {-1,0,3,5,11,12};
    int targ = 0;
    int st = 0, end = arr.size()-1;
    
    cout<< BS(arr, targ, st, end) << '\n';

    return 0;

}