#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr)
{
    int n = arr.size();
    int countRed = 0; // 0
    int countWhite = 0; // 1
    int countBlue = 0; // 2

    for (int i=0; i<n; i++)
    {
        if (arr[i] == 0)
        {
            countRed++;
        }
        else if (arr[i] == 1)
        {
            countWhite++;
        }
        else
        {
            countBlue++;
        }

        int index = 0;
        for (int i=0; i<countRed; i++)
        {
            arr[index++] = 0;
        }

        for (int i=0; i<countWhite; i++)
        {
            arr[index++] = 1;
        }

        for (int i=0; i<countBlue; i++)
        {
            arr[index++] = 2;
        }
        
    }
    
}

void sortColors2(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, mid = 0, high = n-1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
        
        
    }
    
}



void printArr(vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
        
    }
    cout<< '\n';
}

int main()
{
/*
    ============= Dutch National Flag Algorithm =============
    Note: this algorithm focuses on sorting an array that contains only three distinct values 
    in a single pass.

    We use three pointers:
    low: Everything to the left of low is 0 (red)
    mid: Current element being examined
    high: Everything to the right of high is 2 (blue)
*/
    vector<int> arr = {2,0,2,1,1};

    // sortColors(arr);
    sortColors2(arr);
    printArr(arr);


    return 0;
}