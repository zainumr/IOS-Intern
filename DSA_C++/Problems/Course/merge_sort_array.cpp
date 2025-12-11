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

    return 0;
}