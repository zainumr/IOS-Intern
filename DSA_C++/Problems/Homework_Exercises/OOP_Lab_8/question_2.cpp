#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    float* marks;
public:
    void inputData()
    {
        cout<< "Enter Student Name: ";
        cin>> name;

        cout<< "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin>> marks[i];
            cout<< " ";
        }
        cout<< '\n';

        calculateAverage();
    }

    float calculateAverage()
    {
        float sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }

        return sum / 3;
        
    }

    void display()
    {
        cout<< "Average Marks: " << calculateAverage() << '\n';
    }

    Student() 
    {
        marks = new float[3];
    }

    Student(string n, float m[]) : name(n)
    {
         for (int i = 0; i < 3; i++)
         {
            marks[i] = m[i];
         }
    }

    ~Student() 
    { 
        
        delete[] marks;
        cout<< "Destructor called for Ayesha\n"; 
    }
   
};

/*
    ================= Problem 2: Destructor =================
    Write a C++ program to demonstrate the working of a Destructor by using dynamic memory allocation for storing
    marks.
    1. Class: Student
        -> Data Members:
            . string name
            . float *marks (dynamic array for 3 subjects)
        -> Member Functions:
            . float calculateAverage();
            . void display();
        -> Constructors:
            . Parameterized Constructor — allocate memory and input marks.
        -> Destructor:
             Release memory and print "Destructor called for [name]".
    2. Input: Student name and marks for 3 subjects.
    3. Output: Display average marks and destructor message.
*/

int main()
{
    Student s1;
    s1.inputData();
    s1.display();

    return 0;
}