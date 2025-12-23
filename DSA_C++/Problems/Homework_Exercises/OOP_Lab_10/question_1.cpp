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
    ================= Problem 1: Public Inheritance =================
    1. Base Class: Person
        -> Data Members:
            . string name
            . int age
        -> Member Functions:
            . void inputPerson() – take name and age
            . void displayPerson() – display name and age
    2. Derived Class Student : public Person
        -> Data Members:
            . int rollNo
        -> Member Functions:
            . void inputStudent() – take roll number
            . void displayStudent() – display all details (name, age, roll number)

    Program Requirements
    1. Create both classes as above using public inheritance.
    2. Take input for student and person data using the derived object.
    3. Show that displayPerson() is accessible from the derived object (because of public inheritance).
*/

int main()
{
    Student s;
    s.inputStudent();
    s.displayStudent();


    return 0;
}