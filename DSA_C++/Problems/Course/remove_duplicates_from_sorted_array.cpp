#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> arr)
{
    
    int j = 0;

    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i] != arr[i-1])
        {
            arr[++j] = arr[i];
            
        }        
    }

    return j+1;

}

int main()
{
    vector<int> arr = {1,1,2};

    cout<< removeDuplicates(arr) << '\n';

    return 0;
}