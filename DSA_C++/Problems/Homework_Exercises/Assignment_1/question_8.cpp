#include <iostream>
#include <vector>
using namespace std;

// =========== Bubble Sort ===========
void bubbleSort(vector<int> &arr) 
{
    int n = arr.size(); 
    bool isSwap = false;
    
    for (int i=0; i<n-1; i++) 
    {
        for (int j=0; j<n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                swap(arr[j], arr[j+1]);  
                isSwap = true;  
            }
        }
    }

    if (!isSwap)
    {
        return;
    }
    
}

// =========== Selection Sort ===========
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    
    for (int i=0; i<n-1; i++)
    {
        int smallest = i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }

        swap(arr[i], arr[smallest]);
        
    }
    
}

// =========== Insertion Sort ===========
void insertionSort(vector<int> &arr) // {4,1,5,2,3}
{
    int n = arr.size();
    
    for (int i=1; i<n; i++)
    {
        int currEl = arr[i], prevIdx = i-1;
   
        while (prevIdx >= 0 && arr[prevIdx] > currEl)
        {
            arr[prevIdx+1] = arr[prevIdx];
            prevIdx--;
        
        }

        arr[prevIdx+1] = currEl;
      
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
    ================== Question #08 ==================
    Write functions which will sort an integer array.
    • Bubble Sort
    • Selection Sort
    • Insertion Sort
*/
    vector<int> arr = {4,1,5,2,3};

    // =========== Bubble Sort ===========
    // bubbleSort2(arr);
    
    // =========== Selection Sort ===========
    // selectionSort(arr);
    
    // =========== Insertion Sort ===========
    insertionSort(arr);
    printArr(arr);

    
    
    return 0;
}