#include <iostream>
using namespace std;

int main()
{
/*
    ================= Problem 4: | Dangling Pointer and Memory Leak =================
    1. Dynamically allocate an integer and assign it a value.
    2. Delete the pointer and then try to access it (demonstrating dangling pointer).
    3. Create a loop that continuously allocates memory without freeing it (demonstrating
    memory leak).
    4. Fix the program by setting pointer to nullptr after deletion and freeing memory
    correctly.
*/
    // 1
    int* n = new int(5);

    // 2
    delete n;
    cout<< *n << '\n';

    // 3
    while (false) {
        int* p = new int(10);  // leak every iteration
        // delete p;
        // p = nullptr;

    }

    // 4
    n = nullptr;

    


    return 0;
}