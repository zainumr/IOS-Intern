#include <iostream>
#include <vector>
using namespace std;

/*
    ================= Problem 2 =================
    1. Declare three integer variables x = 100, y = 200, z = 300.
    2. Declare one pointer p.
    3. First point p to x and print value.
    4. Then point p to y and change its value to 250 through the pointer.
    5. Finally, point p to z and print the value.
    6. Print final values of x, y, z from variables (to check updates)
*/

int main()
{


    // 1 
    int x = 100;
    int y = 200;
    int z = 300;

    // 2
    int* p;

    // 3
    p = &x;
    cout<< *p << '\n';

    // 4
    p = &y;
    *p = 250;
    cout<< y << '\n';

    // 5
    p = &z;
    cout<< *p << '\n';

    // 6
    cout<< "x = " << x << '\n';
    cout<< "y = " << y << '\n';
    cout<< "z = " << z << '\n';

    return 0;
}