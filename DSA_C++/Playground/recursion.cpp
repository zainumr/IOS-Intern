#include <iostream>
#include <vector>
using namespace std;

void printNums(int n){
    if(n == 1){
        cout<< 1 << '\n';
        return;
    }
    
    cout<< n << ' ';

    printNums(n-1);
}

int printFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * printFactorial(n-1);
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
   return n + sum(n-1);
}

int fib(int n)
{
    if (n == 0 || n == 1) return n;
    
    return fib(n-1) + fib(n-2);
}

bool isSorted(vector<int> arr, int n)
{
    if (n == 0 || n == 1) return true;
    
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int recurrBinarySearch(vector<int> arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar == arr[mid])
        {
            return mid;
        }
        else if(tar > arr[mid])
        {
           return recurrBinarySearch(arr, tar, mid+1, end);
        }
        else
        {
           return recurrBinarySearch(arr, tar, st, mid-1);
        }
    }

    return -1;  
}

void printSubSet(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        for (int el : ans)
        {
            cout<< el << ' '; 
        }
        cout<< '\n';
        return;
    }

    ans.push_back(arr[i]);
    printSubSet(arr, ans, i+1);

    ans.pop_back();

    printSubSet(arr, ans, i+1);

    
}

int main()
{
    /*
        ========== Recursion ==========
        1. A function that calls it self until base condition met

        2. Back tracking: after return statement value of n get restored

        3. Recurrence Relation

        4. TC = total no. of recursion call * work in each call

        5. SC = Depth/height of Recursive tree/stack * memory in call

    */
   vector<int> arr = {1,2,3};
   vector<int> ans;
//    int st = 0, end = arr.size()-1, tar = 3;
    // int n = 3;

    // cout<< recurrBinarySearch(arr, tar, st, end) << '\n';
    // cout<< '\n';

    // cout<< printFactorial(n) << '\n';

    printSubSet(arr, ans, 0);

    return 0;
}