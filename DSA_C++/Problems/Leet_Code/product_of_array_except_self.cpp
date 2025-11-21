#include <iostream>
#include <vector>
using namespace std;

// brute force approach
/*
vector<int> ansProduct(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (nums[i] != nums[j])
            {
                ans[i] *= nums[j];
            }
        }
    }
    
    return ans;
    
}

// lower optimal approach
vector<int> ansProduct(vector<int> nums)
{
    int n = nums.size();
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> ans(n, 0);

    // prefix
    for (int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // suffix
    for (int i=n-2; i>=0; i--)
    {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    for (int i=0; i<n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
    
}
    
*/

// very optimal approach
vector<int> ansProduct(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    
    // prefix directly store in ans array
    for (int i=1; i<n; i++)
    {
        ans[i] = ans[i-1] * nums[i-1];
    }
    
    // // suffix directly store in ans array
    int suffix = 1;
    for (int i=n-2; i>=0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
    
}

int main()
{
    vector<int> nums = {1,2,3,4};
    ansProduct(nums);
/*
*/
    vector<int> ansProd = ansProduct(nums);
    
    // int n = 4;
    // vector<int> arr(n, 1);

    for (int i=0; i<ansProd.size(); i++)
    {
        cout<< ansProd[i] << " ";
    }
    cout<< '\n';
    return 0;
}