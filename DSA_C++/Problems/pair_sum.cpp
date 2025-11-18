#include <iostream>
#include <vector>
#include <algorithm> 
// #include <bits/stdc++.h> 
using namespace std;

// Two pointers apporach
vector<int> pairSum(vector<int> nums, int target){
    vector<int> indexPair;
    int st = 0;
    int end = nums.size() - 1;

    while (st < end)
    {
        int pairSum = nums[st] + nums[end];

        if (pairSum > target)
        {
            end--;
        } 
        else if (pairSum > target)
        {
            st++;
        }
        else
        {
            indexPair.push_back(st);
            indexPair.push_back(end);
            return indexPair;
        }
        
    }

    return indexPair;
    
}

int main() {

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);

    cout<< ans[0] << ", " << ans[1] << "\n";


    return 0;
}