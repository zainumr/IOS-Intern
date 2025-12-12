#include <iostream>
using namespace std;

int main()
{
/*
    ================= Typedef =================
    What is typedef?
    1. typedef lets you create an alias (another name) for a data type.
    2. Makes code shorter and easier to read.
*/

    typedef unsigned int ID; // can only stores non-negative numbers
    typedef int countryCode; // can stores both
    
    ID appnetic = 9887;
    countryCode pk = 92;
    cout<< appnetic << '\n';
    cout<< pk << '\n';

    return 0;
}