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

    Student(const Student &obj)
    {
        name = new char[30];
        strcpy(name, obj.name);
    }
    
    void changeName(const char* n)
    {
        strcpy(name, n);
    }

    void show()
    {
        cout<< "Name: " << name << '\n';
    }

    ~Student()
    {
        delete[] name;
    }
   
};


/*
    ================= Problem 2: Deep Copy Constructor =================
    Create a C++ program that performs a deep copy using a custom copy constructor to ensure both 
    objects have independent memory.
    1. Class Name: Student
        -> Data Members
    • char* name — dynamically allocated memory for name
        -> Member Functions
    • void changeName(const char* n) — changes the name
    • void show() — displays the name
        -> Constructors
    2. Parameterized Constructor — to allocate and copy the given name
    3. Copy Constructor — to allocate separate memory and copy content
    4. Destructor — to free allocated memory

    Program Requirements
    1. Create an object s1 with the name "Ali".
    2. Create another object s2 = s1; (copy it using deep copy constructor).
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