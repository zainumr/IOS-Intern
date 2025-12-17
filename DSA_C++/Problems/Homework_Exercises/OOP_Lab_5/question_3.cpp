#include <iostream>
#include <string>
#include <limits>
using namespace std;

// 1
struct Student
{
    int rollNo;
    string name;
    float marks[3];
    float avg;

    
};

// 3
void studentData(Student* students, int n)
{
    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += students[i].marks[j];
        }
        
        students[i].avg = sum/n;
    }

    cout<< students->avg << '\n';
    
}

// 4
void highestAvg(Student* students, int n)
{
    float currHighest = 0;
    int currIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].avg > currHighest)
        {
            currHighest = students[i].avg;
            currIdx = i;
        }
        
        cout<< "Student " << i+1 << ": " << students[i].name << ", " << "Avg = " << students[i].avg << '\n';
        
    }
    cout<< "Topper(s):\n";
    cout<< students[currIdx].name << " with average " << currHighest << '\n';


    
}

/*
    ================= Problem 3: Structures and Pointer Variables =================
    Write a C++ program to manage student records using dynamic memory allocation.
    1. Define a struct Student with: roll number, name, and marks in 3 subjects
    2. Dynamically allocate memory for N students using pointers
    3. Write a function to compute and store the average marks of each student
    4. Write a function to display the student(s) with the highest average
    5. Free the dynamically allocated memory after use
*/

int main()
{
    // 2
    int n;
    cout<< "Enter Number of Student: ";
    cin>>n;

    Student* students = new Student[n];

    students[0] = {101, "Ali", 76, 76, 76.99};
    students[1] = {102, "Hina", 88, 89, 88.98};
    students[2] = {103, "Umar", 60, 65, 67.99};

    // 3
    studentData(students, n);

    // 4
    highestAvg(students, n);

    // 5
    delete students;
    students = nullptr;

    return 0;
}