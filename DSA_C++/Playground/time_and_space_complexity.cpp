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

        5. When we talk about space complexity Input doesn't take space, Auxiliary(Extra) space is
        counted as space complexity
        
        6. Space Complexity -> Big O(n) becaause of constant space O(k) we ignore constant so O(1)

        7. O(n!) Worst Complexity

        8. O(2^n) Exponential(Bad) Complexity (Brute Force, Recursion)

        9. O(n^2), O(n^3) Not So Good Complexity (Bubble Sort, Selection Sort, Insertion Sort) comparison based algorithm

        10. O(nlog n) Average Complexity (Sorting, Merg Sort, Quick Sort, Greedy Algo) optimize sorting algorithm

        11. O(n) Good Complexity (Linear Search) triversing
            1. N Factorial
            2. Nth Fibnocci
            3. Kadan's Algo

        12. O(log n) Very Good (Binary Search -> Efficient search algorithm to find target apply on sorted arrays)

        13. O(1) Very Optimized (no loop, no recursion only solved from mathematical equation)

            1. Sum of numbers from 1 to N

    */
}