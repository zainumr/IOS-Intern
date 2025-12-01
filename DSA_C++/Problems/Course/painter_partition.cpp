#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1, time = 0;

    for (int i=0; i<n; i++)
    {
        if (arr[i] > maxAllowedTime)
        {
            return false;
        }
        
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
        
    }

    return painters > m ? false : true;
    
    
}

int painterPartition(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    
    int sum = 0;
    int minTime = 0;
    for (int i=0; i<arr.size(); i++)
    {
        sum += arr[i];
        minTime = max(minTime, arr[i]);
    }

    
    int st = minTime, end = sum;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end-st)/2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            st = mid+1;
        }
    }

    return ans;
    
}


int main()
{
    vector<int> arr = {40,30,10, 20};
    int n = 4, m = 2;

    cout<< painterPartition(arr, n, m) << '\n';

    return 0;
}