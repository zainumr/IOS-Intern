#include <iostream>
#include <vector>
using namespace std;

int singleEl(vector<int> nums)
{
    int n = nums.size();
    int st = 0, end = n-1;

    while (st <= end)
    {
        int mid = st + (end-st)/2;

        if(mid == 0)
        {
            return nums[mid];
        }

        if (nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1])
        {
            return nums[mid];
        }

        if (mid%2 == 0) // even
        {
           if (nums[mid-1] == nums[mid])
           {
                end = mid-1;
           }
           else
           {
                st = mid+1;
           }
           
        }
        else // odd
        {
            if (nums[mid-1] == nums[mid])
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
    vector<int> nums = {1,1,3,3,4,4,9};

    cout<< singleEl(nums) << '\n';
}