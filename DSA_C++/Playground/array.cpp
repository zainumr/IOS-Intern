#include <iostream>
#include <vector>
using namespace std;

void changeArr(int num[], int size)
{
    for (int i=0; i<size; i++)
    {
        num[i] = 2 * num[i];
    }
    
}

int searchTarget(int arr[], int size, int target)
{
    for (int i=0; i<size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        } 
    }

    return -1;
    
}

// Reverse an array (with 2 pointers approach)
void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int sumAndProduct(int arr[], int sz)
{
    int sum = 0;
    int product = 1;

    for (int i=0; i<sz; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout<< "Sum = " << sum << "\n";
    cout<< "Product = " << product << "\n";

    return 0;
    
}

int minMaxSwap(int arr[], int sz)
{
    int minNum = INT_MAX; // +ve garbage value
    int maxNum = INT_MIN; // -ve garbage value
    int minIndex;
    int maxIndex;

    for (int i=0; i<sz; i++)
    {
        // min and max num
        minNum = min(minNum, arr[i]);
        maxNum = max(maxNum, arr[i]);
        // get index
        if (arr[i] == minNum)
        {
            minIndex = i;
        }
        
        if (arr[i] == maxNum)
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    return 0;
    
}

int uniqueValue(int arr[], int sz)
{
    int uniqueVal = 0;
    
    for (int i=0; i<sz; i++)
    {
        // uniqueVal ^= arr[i];

        int count = 0;
        for (int j=0; j<sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            // cout<< arr[i] << "\n";
            return uniqueVal = arr[i];
        }
        
    }

    return -1;
}

 vector<int> intersectNum(vector<int> arr1, vector<int>  arr2)
{
    vector<int> intersects;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersects.push_back(arr1[i]);
            }
            
        }
        
    }
    return intersects;
}

vector<int> reverseArr(vector<int>& arr){
    for(int val : arr){

        arr.push_back(val);
    }
    return arr;

}

int main()
{

/*
int marks[3] = {85, 54, 98};

// cout<< marks.length << endl;
// cout<< marks[1] << endl;
// cout<< marks[2] << endl;

// int marks = [85, 54, 98]; 

int arrLength = sizeof(marks) / sizeof(int);

cout<< sizeof(marks) << endl;

for (int i=0; i<arrLength; i++)
{
    cout<< marks[i] << endl;
}
    

int nums[] = {5, 22, 44, 1, -9, -56};
int size = 6;
int smallest = INT_MAX;
int largest = INT_MIN;
int index;

for (int i=0; i<size; i++)
{
    // Pre defined functions for min & max numbers
    // smallest = min(smallest, nums[i]);
    // largest = max(largest, nums[i]);
    
    // printing index for min number
    // if (nums[i] < smallest)
    // {
        //     smallest = nums[i];
        //     index = i;
        // }
        
        // printing index for max number
        if (nums[i] > largest)
        {
            largest = nums[i];
            index = i;
        }
    }
    
    // cout<< "Smallest = "  << smallest << endl;
    cout<< "Largest = " << largest << endl;
    cout<< "Index = "  << index << endl;
    
    // Pass by Reference
    
    int num[] = {1, 2, 3};
    int size = 3;
    
    changeArr(num, size);
    
    for (int i=0; i<size; i++)
    {
        cout<< num[i] << " ";
    }
    
    
    // Linear search (Algorithm)
    
    int arr[] = {1, 4, 5, 9, -12};
    int size = 5;
    int target = 99;
    
    int ans = searchTarget(arr, size, target);
    
    cout<< ans << endl;
    

// Reverse an array (with 2 pointers approach)

int arr[] = {1, 4, 5, 9, 12};
int size = 5;


for (int i=0; i<size; i++)
{
    cout<< arr[i] << " ";
}

cout<<endl;

reverseArr(arr, size);

for (int i=0; i<size; i++)
{
    cout<< arr[i] << " ";
}

---------- Homework Problems ----------

// 1. WAF to calculate sum & product of numbers in an array

int arr[] = {1,2,3,4,5};
int sz = 6;

cout<< sumAndProduct(arr, sz) << endl;



// 2. WAF to swap max and min numbers of an array

int arr[] = {5,4,3,2,1};
int sz = 5;

for (int i=0; i<sz; i++)
{
    cout<< arr[i] << " ";
}

cout<<"\n";

minMaxSwap(arr, sz);

for (int i=0; i<sz; i++)
{
    cout<< arr[i] << " ";
}

// 3. WAF to print the all unique value in an array.

int arr[] = {5,5,3,3,3,2,2,7};
int sz = 8;
cout<< uniqueValue(arr, sz) << "\n";



// 4. WAF to print intersection of 2 arrays.
vector<int> arr1 = {1,2,3,4,5,56};
vector<int> arr2 = {1,6,3,7,5,11,34,56};

vector<int> intersectedArr = intersectNum(arr1, arr2);
intersectedArr.push_back(23); // add val at last index
intersectedArr.pop_back(); // remove val from last index


for (int i = 0; i < intersectedArr.size(); i++)
{
    cout<< intersectedArr[i] << " ";
}

cout << "\n";
cout<< intersectedArr.front() << endl; // will print val from 1st index
cout<< intersectedArr.back() << endl; // will print val from last index
cout<< intersectedArr.at(2) << endl; // will print val at particular index


// ========== Homework problem ==========

// write linear search program for vectors
vector<int> arr = {1,2,3,4,5};

reverseArr(arr);

for (int val : arr)
{
    cout<< val << "\n";
}
*/

// int arr[] = {1,2,3,4,5};
// int n = 5;

// int maxSum = INT16_MIN;

// for (int st=0; st<n; st++)
// {
//     int currSum = 0;
//     for (int end=st; end<n; end++)
//     {
//         currSum += arr[end];
//         maxSum = max(currSum, maxSum);
//     }
// }

// cout<< maxSum << "\n";



return 0;
}   