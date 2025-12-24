#include <iostream>
using namespace std;

class Teacher
{
private:
    string name;
public:
    void inputTeacher()
    {
        cout<< "Enter Teacher Name: ";
        getline(cin, name);
    }

    void displayTeacher()
    {
        cout<< "Teacher Name: " << name << '\n';
    }
    
};

class Department
{
private:
    Teacher* teacher;
    string deptName;
public:
    void inputDepartment(Teacher* T)
    {
        cout<< "Enter Department: ";
        getline(cin, deptName);
        T->inputTeacher();
    }

    void displayDepartment(Teacher* T)
    {
        cout<< "Department: " << deptName << '\n';
        T->displayTeacher();
    }
    
};



/*
    ================= Problem: 3 =================
    Associated Class: Teacher
        •	Data Members:
        •	string name
        •	Member Functions:
        •	void inputTeacher() – take teacher name
        •	void displayTeacher() – display teacher name

    Main Class: Department
        •	Data Members:
        •	string deptName
        •	Teacher* teacher (Aggregation – Department has a Teacher but does not own it)
        •	Member Functions:
        •	void inputDepartment(Teacher* t) – take department name and associate passed teacher object
        •	void displayDepartment() – display department name and call teacher’s displayTeacher()

    Program Requirements
        •	Implement the classes using aggregation (Department uses Teacher).
        •	Create a Teacher object in main() and pass its address to Department.
        •	Ensure that the same Teacher can be linked with multiple Department objects.
*/

int main()
{
    Teacher t;
    Department d1;
    d1.inputDepartment(&t);
    cout<< '\n';
    d1.displayDepartment(&t);


    return 0;
}