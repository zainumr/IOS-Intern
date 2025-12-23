#include <iostream>
#include <string>
using namespace std;

// 1
class Person
{
private:
    string name;
    int age;
public:
    void inputPerson()
    {
        cout<< "Enter Name: ";
        cin>> name;

        cout<< "Enter Age: ";
        cin>> age;
    }

    void displayPerson()
    {
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
        cout<< "Enter Roll Number: ";
        cin>> rollNo;
    }

    void displayStudent()
    {
        cout<< "Roll Number: " << rollNo << '\n';
    }
};

class GraduateStudent : public Student
{
private:
    string thesisTitle;
public:
    void inputGraduate()
    {
        inputPerson();
        inputStudent();
        cin.ignore();
        cout<< "Enter Thesis Title: ";
        getline(cin, thesisTitle);
    }

    void displayGraduate()
    {
        cout<< "Graduate Student Details:\n";
        displayPerson();
        displayStudent();
        cout<< "Thesis Title: " << thesisTitle << '\n';
    }
};


/*
    ================= Problem 5: Multilevel Inheritance =================
    Class Design
    1. Base Class: Person
        -> Data Members:
            . string name
            . int age
        -> Member Functions:
            . void inputPerson() — to take name and age
            . void displayPerson() — to display name and age
    2. Derived Class 1 (Derived from Person): Student : public Person
        -> Data Members:
            . int rollNo
        -> Member Functions:
            . void inputStudent() — to take roll number
            . void displayStudent() — to display roll number
    3. Derived Class 2 (Derived from Student): GraduateStudent : public Student
        -> Data Members:
            . string thesisTitle
        -> Member Functions:
            . void inputGraduate() — to take thesis title
            . void displayGraduate() — to display all details (name, age, rollNo, thesisTitle)

    Program Requirements
    1. Create classes exactly as above.
    2. Use multilevel inheritance (Person → Student → GraduateStudent).
    3. Create an object of GraduateStudent.
    4. Call input and display functions to show all details.
*/

int main()
{
    GraduateStudent gs1;
    gs1.inputGraduate();
    cout<< '\n';
    gs1.displayGraduate();


    return 0;
}