#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool isSwap = false;

        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            } 
        }

        if (!isSwap)
        {
            return;
        }

    }    
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int smallestIndex = i; // track smallest el from sorted part (we assume first el is smallest)

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex]) // curr el is less than smallest el
            {
                 smallestIndex = j; // update smallest el
            }
        }

        swap(arr[i], arr[smallestIndex]); // swap curr el with smallest el
        
    }
    
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int currEl = arr[i], prevIdx = i-1; // We want to show second element from the unsorted part of the array 

        while (prevIdx >= 0 && arr[prevIdx] > currEl)
        {
            arr[prevIdx+1] = arr[prevIdx];
            prevIdx--;
        }
        
        arr[prevIdx+1] = currEl;

    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
        
    }
    cout<< '\n';
}

int main()
{
    /*
        ========== Sorting Algorithms ==========
        1. whenever we sort data in ascending or descending order this process is known as sorting
        2. In all sorting technique we can easily print arr elements in descending order by changing the 
        comparison statement

        ========== Bubble Sort ==========
        1. n-1 times run loop
        2. compare adjucent
        3. push larger element to back

        ========== Selection Sort ==========
        1. divide arr in 2 parts, sorted and unsorted parts
        2. we check smallest el in unsorted parts 
        3. swap that el to sorted part

        ========== Insertion Sort ==========
        1. we asume that our first el of array is sorted
        2. our outer loop will start from index 1 to < n
        3. track curr el -> arr[i] and prev index -> i-1
        4. run while loop until prev index is >= 0 and arr[pre index] > curr el
        5. shift el on prev index -> arr[prev index] to next index -> arr[prev+1] 
        6. decrease prev index -> prev--
        7. place curr el to arr[prev+1]


    */

    // ========== Bubble Sort ==========
    int arr[] = {4,1,5,2,3};
    int n = 5;

    // bubbleSort(arr, n);

    // ========== Selection Sort ==========
    // selectionSort(arr, n);
    
    // ========== Insertion Sort ==========
    insertionSort(arr, n);
    printArr(arr, n);



    return 0;
}