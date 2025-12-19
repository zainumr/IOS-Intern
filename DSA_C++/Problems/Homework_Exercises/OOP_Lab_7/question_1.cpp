#include <iostream>
#include <string>
using namespace std;

// 1
class Student
{
protected:
    int rollno;
    string name;
    float marks[3];
    float avg;
    string grade;
    static int totalStudents;
public:
    Student()
    {
        rollno = 0;
        name = "";
        marks[0];
        avg = 0;
        grade = "";
    }

    static void showTotalStudents()
    {
        cout<< "--- Enter Details for Student " << ++totalStudents << " ---\n";
    }

    void inputData()
    {
        cout<< "Input Function Invoked:\n";

        cout<< "Enter Roll No: ";
        cin>> rollno;

        cout<< "Enter Name: ";
        cin>> name;

        cout<< "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin>> marks[i];
            cout<< " ";
        }
        cout<< '\n';
    } 

    void calculateResult()
    {
        cout<< "Result Function Invoked:\n";

        int sum = 0;
        for (int i = 1; i <= 3; i++)
        {
            sum += marks[i];
        }
        
        avg = sum/3;

        if (avg >= 90 && avg <= 100)
        {
            grade = "A+";
        }
        else if (avg >= 80 && avg < 90)
        {
            grade = 'A';
        }
        else if (avg >= 70 && avg < 80)
        {
            grade = 'B';
        }
        else if (avg >= 50 && avg < 70)
        {
            grade = 'C';
        }
        else
        {
            grade = 'F';
        }
    }

    const void displayData()
    {
        cout<< "Display Function Invoked:\n";

        cout<< "Roll No: " << rollno << " | ";
        cout<< "Name: " << name << " | ";
        cout<< "Average: " << avg << " | ";
        cout<< "Grade: " << grade << "\n";

        cout<< "---------------------------------------\n";
    }

    Student& updateMarks()
    {
        int idx, newMarks;

        cout<< "Enter Roll No to Update: ";
        cin>> rollno;

        cout<< "Enter subject number: (1-3): ";
        cin>> idx;

        cout<< "Enter New Marks: ";
        cin>> newMarks;

        if (idx >= 0 && idx <= 3)
        {
            marks[idx] = newMarks;
        }

        int sum = 0;
        for (int i = 1; i <= 3; i++)
        {
            sum += marks[i];
        }

        avg = sum/3;

        return *this;
    }

    ~Student()
    {
        cout<< "Student [" << rollno << "] destroyed./n";
    }
};

int Student::totalStudents = 0;

class Classroom
{
protected:
    string className;
    Student student[5];
    int studentCount;
    
public:
    void addStudents()
    {
        
    }
    
};



// int addStudent()
// {
//     int maxStudents;
//     cout<< "How many students to add (max 5)? ";
//     cin>> maxStudents;

//     return maxStudents;
// }

// void allStudents()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         Student s[i];
//         cout<< "--- Enter Details for Student " << i+1 << " ---\n";
//         s[i].inputData();
//     }
// }


/*
    ================= Problem 1 =================
    void inputData() → takes input for name, roll number, and marks in 3 subjects.
    • void calculateResult() → calculates average and grade.
    • void displayData() const → displays full student info (make it const).
    • Student& updateMarks() → allows updating marks for one subject and recalculates average (returns *this for
    chaining).
    • static void showTotalStudents() → displays total number of students.
*/

int main()
{
    


    // cout<< "=== STUDENT MANAGEMENT SYSTEM ===\n";
    // Student s1, s2;
    // cout<< "--- Enter Details for Student 1 ---\n";
    // s1.inputData();
    // s1.calculateResult();
    
    // cout<< "--- Enter Details for Student 2 ---\n";
    // s2.inputData();
    // s2.calculateResult();


    // s1.displayData();
    // s2.displayData();




    

    return 0;
}