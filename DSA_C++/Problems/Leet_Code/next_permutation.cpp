#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &nums) // {1,2,3}
{
    int n = nums.size();
    // find pivot
    int pivot = -1;

    for (int i = n-2; i >= 0; i--)
    {
        if (nums[i] < nums[i+1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // find next larger number
    for (int i = n-1; i > pivot; i--)
    {
        if (nums[i] > nums[pivot])
        {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // reverse nums array from pivot+1 to n-1
    int st = pivot+1, end = n-1;

    while (st <= end)
    {
        swap(nums[st++], nums[end--]);
    }
    
    
    
    
    
}

void printArr(vector<int> nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        cout<< nums[i] << " ";
        
    }
    cout<< '\n';
}

int main()
{
    vector<int> nums = {1,2,3};
    
    nextPermutation(nums);
    printArr(nums);


    return 0;
}