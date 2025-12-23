#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    
    void input()
    {
        cout<< "Enter Name: ";
        cin>> name;
        cout<< "Enter Age: ";
        cin>> age;
    }

    void display()
    {
        cout<< "Student Details:\n";
        cout<< "Name: " << name << '\n';
        cout<< "Age: " << age << '\n';
    }  
};

class Student : public Person
{
private:
    int rollNo;
public:

    void inputStudent()
    {
        input();
        cout<< "Enter Roll Number: ";
        cin>> rollNo;
    }

    void displayStudent()
    {
        display();
        cout<< "Roll No: " << rollNo << '\n';
    }
    
};

/*
    ================= Problem 4: Basic Inheritance =================
    1. Base Class: Person
    2. Derived Class: Student
    3. Person — Data Members
        • string name
        • int age
        -> Person — Member Functions
        • void input() — to take name and age
        • void display() — to display name and age
    4. Student — Data Members
        • int rollNo
        -> Student — Member Functions
        • void inputStudent() — to take roll number
        • void displayStudent() — to display roll number along with person details

    Program Requirements
    1. Derive Student publicly from Person.
    2. Take input for name, age, and roll number.
    3. Display all details using functions from both classes.
*/

int main()
{
    Student s;
    s.inputStudent();
    s.displayStudent();


    return 0;
}