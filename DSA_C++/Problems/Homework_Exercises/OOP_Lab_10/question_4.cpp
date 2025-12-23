#include <iostream>
using namespace std;

class Teacher
{
public:

    virtual void show()
    {
        cout<< "I am a Teacher\n";
    }  
};

class Researcher
{
public:

    void show()
    {
        cout<< "I am a Researcher\n";
    }
    
};

class Professor : public Teacher, public Researcher
{
public:

    void introduce()
    {
        // show();
        Teacher::show(); // ambigous error solved by scope resolution;
        Researcher::show();
    }
    
};

/*
    ================= Problem 4: Multilevel Inheritance with Ambiguity Error =================
    1. Base Class 1: Teacher
        -> Member Function:
            . void show() – prints "I am a Teacher"
    2. Base Class 2: Researcher
        -> Member Function:
            . void show() – prints "I am a Researcher"
    3. Derived Class: Professor : public Teacher, public Researcher
        -> Member Function:
            . void introduce() – calls show()

    Program Requirements
    1. Compile the program as is and observe the ambiguity error when calling show().
    2. Resolve it.
    3. Re-run and verify correct output.
    There should be 2 outputs pasted for this question. First being with the error and second after resolving it.
*/

int main()
{
    Professor p;
    p.introduce();


    return 0;
}