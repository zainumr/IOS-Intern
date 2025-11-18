#include <iostream>
#include <vector>
using namespace std;

int majorityEl(vector<int> nums)
{
    /*
        // ========== Brute force approach ==========
    
        int mjEL = 0;
        
        for (int i=0; i<nums.size(); i++)
        {

            int count = 0;
            for (int j=0; j<nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }

            if (count > nums.size()/2)
            {
                return mjEL = nums[i];
            }
            
        }
   
        // ========== Optomise Approach ==========

        // sort nums array
        sort(nums.begin(), nums.end());

        // frequency
        int freq = 0, ans = nums[0];

        for(int i=1; i<nums.size(); i++){
            
            if(nums[i] == nums[i-1]){

                freq++;
            } else{

                freq = 1;
                ans = nums[i];
            }

            if(freq > nums.size()/2){
                return ans;
            }
        }
    */
        // ========== Moore's voting Alog ==========

        //frequency 
        int freq = 0, ans = 0;

        for(int val : nums){

            if(freq == 0){
                ans = val;
            }

            if(ans == val){

                freq++;
            } else {

                freq--;
            }
        }

        return ans;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << majorityEl(nums) << "\n";

}