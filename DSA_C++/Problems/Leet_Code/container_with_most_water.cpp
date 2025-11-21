#include <iostream>
#include <vector>
using namespace std;

int containerWithMostWater(vector<int> height){

    int maxWater = 0;
    int lftBoundary = 0;
    int rhtBoundary = height.size()-1;

    while (lftBoundary < rhtBoundary)
    {
        int wd = rhtBoundary - lftBoundary;
        int ht = min(height[lftBoundary], height[rhtBoundary]);
        int currWater = wd * ht;
        maxWater = max(maxWater, currWater);

        height[lftBoundary] < height[rhtBoundary] ? lftBoundary++ : rhtBoundary--;
        
    }

    return maxWater;
    
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // output 49

    cout<< containerWithMostWater(height) << '\n';

}