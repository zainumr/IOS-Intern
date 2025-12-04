#include <iostream>
#include <vector>
using namespace std;

void mergeSortArr(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int idx = m+n-1, i = m-1, j = n-1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] < nums2[j])
        {
            nums1[idx--] = nums2[j--];
            
        } 
        else // nums1[i] > nums2[j]
        {
            nums1[idx--] = nums1[i--];
            
        }
    }

    while (j >= 0)
    {
        nums1[idx--] = nums2[j--];
        
    }
    
}

// void mergeSortArr2(vector<int> &nums) // {2,5,6,1,2,3}
// {
//     int n = nums.size();
//     int idx = n-1, l = 0, r = n-1;
    
//     // while (l <= r)
//     // {
//         int mid = l + (r-l)/2;

//         while (l <= mid)
//         {
//             if (nums[l] < nums[mid])
//             {
//                 l++;
//             }
//             else
//             {
//                 // nums[l] = nums[mid];
//                 // nums[mid] = nums[l];
//                 swap(nums[l], nums[mid]);
//                 l++;
//             }
//         }

//         while (mid+1 <= r)
//         {
//             if (nums[mid+1] < nums[r])
//             {
//                 r--;
//             }
//             else
//             {
//                 // nums[mid+1] = nums[r];
//                 // nums[r] = nums[mid+1];
//                 swap(nums[mid+1], nums[r]);
//                 r--;
//             }
//         }
        
       
//     // }
    
    
// }

void printArr(vector<int> nums1)
{
    int n = nums1.size();

    for (int i = 0; i < n; i++)
    {
        cout<< nums1[i] << " ";
        
    }
    cout<< '\n';
}

int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    
    mergeSortArr(nums1, nums2, m, n);
    printArr(nums1);
    
    vector<int> nums = {5,6,1,4,3,2};
    // mergeSortArr2(nums);


    return 0;
}