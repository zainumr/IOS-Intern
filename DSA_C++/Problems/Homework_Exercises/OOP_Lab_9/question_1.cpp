#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    char* name;

    Student(const char* n)
    {
        name = new char[30];
        strcpy(name, n);
    }
    
    void changeName(const char* n)
    {
        strcpy(name, n);
    }

    void show()
    {
        cout<< "Name: " << name << '\n';
    }
   
};


/*
    ================= Problem 1: Shallow copy =================
    Create a C++ program to demonstrate what happens when a class with dynamic memory allocation 
    uses the default copy constructor (causing a shallow copy).
    1. Class Name: Student
        -> Data Members
            • char* name — dynamically allocated memory for student name
        -> Member Functions
            • void changeName(const char* n) — changes the name
            • void show() — displays the name
        -> Constructors
            • Parameterized Constructor — to allocate and copy the given name
            • (No copy constructor — use default shallow copy)

    Program Requirements
    1. Create an object s1 with the name "Ali".
    2. Create another object s2 = s1; (copy it).
    3. Change s1’s name to "Ahmed".
    4. Display both names using show() function.
*/

int main()
{
    Student s1("Ali");
    Student s2(s1);

    cout<< "Before changing s1:\n";
    s1.show();
    s2.show();

    cout<< "After changing s1:\n";
    s1.changeName("Ahmed");
    s1.show();
    s2.show();
    

    return 0;
}