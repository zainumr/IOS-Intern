#include <iostream>
#include <vector>
using namespace std;

// void changeA(int* ptrA) // pass by reference using pointers
// {
//     *ptrA = 20;
// }

void changeA(int &a) // pass by reference using alies
{
    a = 30;
}

int main()
{
/*  ========== Pointer ==========
    1. speacial variables that store address of other variables
    2.  
    

    // "&" operator to check the address of variable
    int a = 4;
    // cout << &a << '\n';

    // to create a pointer we add "*" with data type or pointer variable name
    int b = 5;
    int* ptr = &b;
    // cout<< ptr << '\n';
    // cout<< &b << '\n';

    int c = 5;
    int *ptr2 = &c;
    // cout<< ptr2 << '\n';
    // cout<< &c << '\n';

    float price = 99.99;
    float* priceAdd = &price; 
    // cout<< priceAdd << '\n';
    // cout<< &price << '\n';

    // pointer to pointer 
    float** ptrPriceAdd = &priceAdd;
    // cout<< ptrPriceAdd << '\n';

    // Dreferance operator
    int d = 6;
    int* dptr = &d;
    // cout<< *(dptr) << '\n';
    // cout<< d << '\n';

    int** ptrDptr = &dptr;
    cout<< *(ptrDptr) << '\n';
    // cout<< &d << '\n';
    // cout<< *(dptr) << '\n';
    // cout<< **(ptrDptr) << '\n';

    int e = 5;
    int* p = &e;
    int** q = &p;
    cout<< *p << '\n'; // 5
    cout<< **q << '\n'; // 5
    cout<< &p << '\n'; // address of e
    cout<< *q << '\n'; // address of p
*/
    // Pass by reference
    // parameters are pass by two way value or reference
    
    // pass by reference using pointers
    int a = 10;
    // changeA(&a);


    // pass by reference using alies
    changeA(a);

    // cout<< "Pass by reference: " << a << '\n';

    // Array pointers
    int arr[] = {1,2,3,4,5}; // constant pointers

    // cout<< arr << '\n'; // already pointer so addres of "arr" will be printed
    // cout<< *arr << '\n'; // now value at first index of arr will be printed 

    int r = 10;
    int* arr1 = &r;

    // cout<< arr << '\n'; // will through error

    // Pointer Arithmetic Increment(++) / Decrement(--)
    int s = 5;
    int* sptr = &s;
    
    // cout<< *sptr << '\n';
    sptr++; // will add 4 byts
    // cout<< *sptr << '\n';

    int arr2[] = {1,2,3,4,5}; 
    // cout<< *arr << '\n';
    // cout<< *arr+1 << '\n';
    // cout<< *arr+2 << '\n';
    // cout<< *arr+3 << '\n';
    // cout<< *arr+4 << '\n';

    // Note: we can't perform addition operations with pointers
    // can subtract 2 pointers if type are same
    











    return 0;
}