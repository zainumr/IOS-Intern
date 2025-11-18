#include <iostream>
#include <vector>
using namespace std;

void printNums(int n){
    if(n == 1){
        cout<< n << " ";
        return;
    }
    cout<< n << " ";
    printNums(n-1);
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

    int n = 4;


    printNums(n); // n to 1

    cout<< "\n";
    return 0;
}