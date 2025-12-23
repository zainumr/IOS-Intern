#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    void inputPerson()
    {
        cout<< "Enter Name: ";
        cin>> name;

        
    }

    void displayPerson()
    {
        cout<< "Name: " << name << '\n';
    }

};

class Student : virtual public Person
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

class Teacher : virtual public Person
{
private:
    string subject;
public:
    void inputTeacher()
    {
        cin.ignore();
        cout<< "Enter Subject: ";
        getline(cin, subject);
    }

    void displayTeacher()
    {
        cout<< "Subject: " << subject << '\n';
    }
};

class TA: public Student, public Teacher
{
private:
    string role;
public:
    void inputTA()
    {
        inputPerson();
        inputStudent();
        inputTeacher();
        cout<< "Enter Role: ";
        getline(cin, role);
    }

    void displayTA()
    {
        cout<< "--- Taaching Assistant Details ---\n";
        displayPerson();
        displayStudent();
        displayTeacher();
        cout<< "Role: " << role << '\n';
    }
};




/*
    ================= Problem 7: Diamond Problem =================
    Class Design
    1. Base Class: Person
        -> Data Members:
            . string name
        -> Member Functions:
            . void inputPerson() — to take name from the user
            . void displayPerson() — to display name
    2. Derived Class 1 (Derived from Person): Student : virtual public Person
        -> Data Members:
            . int rollNo
        -> Member Functions:
            . void inputStudent() — to take roll number
            . void displayStudent() — to display roll number
    3. Derived Class 2 (Also Derived from Person): Teacher : virtual public Person
        -> Data Members:
            . string subject
        -> Member Functions:
            . void inputTeacher() — to take subject name
            . void displayTeacher() — to display subject
    4. Derived Class 3 (Derived from Both Student and Teacher): TA : public Student, 
    public Teacher
        -> Data Members:
            . string role
        -> Member Functions:
            . void inputTA() — to take role
            . void displayTA() — to display all details (name, rollNo, subject, role)

*/

int main()
{

    TA ta;
    ta.inputTA();
    cout<< '\n';
    ta.displayTA();


    return 0;
}