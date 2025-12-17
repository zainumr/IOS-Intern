#include "question_3_header.h"
#include "question_3_implementation.cpp"
#include <iostream>
using namespace std;

/*
    ================= Problem 3: 3 File structure =================
    Create a C++ program (use 3 files – header, implementation, main):
    1. Make a class Student with name and marks.
    2. Constructor should take input values.
    3. Function display() prints the student info.
    4. Create 2 student objects in main.cpp and display them.
    5. (Take input from user in main.cpp for student name & marks)
*/

int main() {
    string name;
    float marks;

    // Student 1
    cout << "Enter name of student 1: ";
    getline(cin, name);
    cout << "Enter marks of student 1: ";
    cin >> marks;
    cin.ignore();   // clear buffer

    Student s1(name, marks);

    // Student 2
    cout << "\nEnter name of student 2: ";
    getline(cin, name);
    cout << "Enter marks of student 2: ";
    cin >> marks;

    Student s2(name, marks);

    // Display student details
    cout << "\n--- Student Details ---\n";
    s1.display();
    cout << endl;
    s2.display();

    return 0;
}