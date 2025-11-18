#include <iostream>
using namespace std;

int isPowerOfTwo(int n)
{
    // while (n%2 == 0)
    // {
    //     n /= 2;
    //     cout << n << endl;
    // }

    // if (n == 1)
    // {
    //     return true;
    // } else {
    //     return false;
    // }

    
    // 1.((n >> 1)%2) == 0
    // 2.(n & (n-1)) == 0

    if ( ((n >> 1)%2) == 0)
    {
       return  true;
    } else {
        return false;
    }
}

int reverseIntN(int n)
{
    int reversed = 0;

    while (n > 0)
    {
        int remainder = n % 10;
        cout<< "remainder = " << remainder << endl;
        reversed = reversed * 10 + remainder;
        cout<< "reversed = " << reversed << endl;
        n = n/10;
        cout<< "n = " << n << endl;
        cout<<endl;
    }
    
    return reversed;
}

int main()
{

/*
    ---- Bitwise "&" : ----
    cout<< (0 & 0) << endl; // 0
    cout<< (0 & 1) << endl; // 0
    cout<< (1 & 0) << endl; // 0
    cout<< (1 & 1) << endl; // 1

    cout<< (4 & 8) << endl; // 0
    cout<< (4 & 12) << endl; // 4 

    ---- Bitwise "|" : ----
    cout<< (0 | 0) << endl; // 0
    cout<< (0 | 1) << endl; // 1
    cout<< (1 | 0) << endl; // 1
    cout<< (1 | 1) << endl; // 1

    cout<< (4 | 8) << endl; // 12
    cout<< (4 | 12) << endl; // 12

    ---- Bitwise " ^ " XOR ----
    Note: if bits are same = 0
    Note: if bits are different = 1

    cout<< (0 ^ 0) << endl; // 0
    cout<< (0 ^ 1) << endl; // 1
    cout<< (1 ^ 0) << endl; // 1
    cout<< (1 ^ 1) << endl; // 0

    cout<< (4 ^ 12) << endl; // 8

    ---- Bitwise Left shift " << " ----
    Note: shift the bits to it's left side
    Note: perform some operation in internal memory

        a * 2^b

    1. 4 << 1
    2. "4" -> is the number
    3. "<<" -> left shift
    4. "1" -> places to shift

    cout<< (4 << 1) << endl; // 8
    cout<< (12 << 1) << endl; // 24



    ---- Bitwise Right Shift " >> " ----
    Note: shift the bits to right side
    Note: perform some operation in internal memory

        a / 2^b

    1. 4 >> 1
    2. "4" -> is the number
    3. "<<" -> left shift operator
    4. "1" -> places to shift

    100 >> 1
    100 = 10 coz there is no place on right side

    cout<< (4 << 1) << endl; // 8
    cout<< (12 << 1) << endl; // 24

    ---- Data type modifiers ----
    Note: 
    1. to change the meaning of data type
    2. positive and negative numbers are stored in signed int like normal int
    3. only positive numbers are stored in unsigned int
    4. size of bits are not increased in unsigned int but the type of data is changed
       
    cout<< sizeof(int) << endl; 
    cout<< sizeof(long int) << endl;
    cout<< sizeof(double) << endl; 
    cout<< sizeof(long double) << endl; 
    cout<< sizeof(long long int) << endl;
    unsigned int num = -15;
    unsigned int num = 15;
    cout<< num << endl;

*/

/*
    ---- Homework problems ----

    1. 6 & 10
    
    (6) base 10 = (110) base 2
    (10) base 10 = (1010) base 2
          0110
        & 1010
          0010 = (2) base 10

    2. 6 | 10
    
    (6) base 10 = (110) base 2
    (10) base 10 = (1010) base 2
          0110
        | 1010
          1110 = (14) base 10

    3. 6 ^ 10
    
    (6) base 10 = (110) base 2
    (10) base 10 = (1010) base 2
          0110
        ^ 1010
          1100 = (12) base 10
    
    4. 10 << 2
    
    (10) base 10 = (1010) base 2
    (2) base 10 = (10) base 2

        __1010
        101000 = (40) base 10
    
    5. 10 >> 1
    
    (10) base 10 = (1010) base 2
    (2) base 10 = (10) base 2

        1010_
        101 = (5) base 10
    
    6. Figure how to find if a number is power of 2 with out any loop 


    
    -----------------------------------------
    */
   
   // cout<< (6 & 10) << endl; // 2
   // cout<< (6 | 10) << endl; // 14
   // cout<< (6 ^ 10) << endl; // 12
   // cout<< (10 << 2) << endl; // 40
   // cout<< (10 >> 1) << endl; // 5
   
   //    cout<< isPowerOfTwo(64) << endl;
   
   cout<< reverseIntN(125) << endl;
   

}