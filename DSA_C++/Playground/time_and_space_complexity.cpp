#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        ========== Time & Space Complexity ==========
        1. Time: Does not means the actual execution time of the code, because different
        operating systems and online servers may take different amounts of time
        to run the same program.

        NOTE: It is amount of time taken as function of input size(n)
        means time taken on operations to solve a input(n)

        2. Time Complexity -> Big O Notation : "Big O" means worst case scenario/complexity also called Upper Bound
            f(n) = 4n^2 + 3n + 5
                 = n^2 + n + 1 // ignore constants
                 = O(n^2) // consider only largest term

        3.  Worst case complexity (Upper bound) = O (Big O)
            Average case complexity = θ (Theta)
            Best case complexity = Ω (Omega)
 
        4. Space: Does not means the actual space taken by code

        NOTE: It is amount of space taken by an algorithm as function of input size(n)

        5. Input doesn't take space when we talk about space complexity, Auxiliary(Extra) space is
        counted as space complexity
        
        6. Space Complexity -> Big O(n) becaause of constant space O(k) we ignore constant so O(1)

        7. O(n!) Worst Complexity

        8. O(2^n) Exponential(Bad) Complexity (Brute Force, Recursion)

        9. O(n^2), O(n^3) Average Complexity (Bubble Sort, Selection Sort, Insertion Sort (Average Complexity)

        10. O(nlog n) Better Complexity (Sorting, Merg Sort, Quick Sort, Greedy Algo)

        11. O(n) Good Complexity (Linear Search)

        12. O(log n) Very Optimized (Binary Search -> value gets half on next operation)

    */
}