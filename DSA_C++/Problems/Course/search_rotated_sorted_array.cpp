#include <iostream>
#include <vector>
using namespace std;

int rotatedSortedArr(vector<int> nums, int targ)
{
    int n = nums.size();
    int st = 0, end = n-1;

    while (st <= end)
    {
        int mid = st + (end-st)/2;

        if (nums[mid] == targ)
        {
            return mid;
        }
        
        if (nums[st] <= nums[mid]) // left sorted
        {
            if (nums[st] <= targ && targ <= nums[mid]) // target lies btw st and mid
            {
                end = mid-1;
            }
            else 
            {
                st = mid+1;
            }
        }
        else // right sort
        {
            if (nums[mid] <= targ && targ <= nums[end]) // target lies btw st and mid
            {
                st = mid+1;
            }
            else
            {
                end = mid-1;
            }

        }  
        
    }

    return -1;
    
}

int main()
{
/*
    Rotated sorted array
    1. find mid
    2. dono mese aik half sorted hoga
    3. now check kro ke hamra target left ya right me exsist krta?
    4. agr left me krta hai to binary search left pe lga do nahi to right pe
*/

    vector<int> nums = {1};
    int target = 1;

    cout<< rotatedSortedArr(nums, target) << '\n';

    return 0;
}