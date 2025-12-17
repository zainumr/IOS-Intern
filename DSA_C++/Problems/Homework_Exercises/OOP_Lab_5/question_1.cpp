#include <iostream>
#include <string>
using namespace std;

// 1
struct Department
{
    string deptName;
    int totalFaculty;

    // 2
    struct Faculty
    {
        string facultyName;
        string designation;
        int yearOfExp;

    };

    // 3
    Faculty faculty[2];
    
};

// 4
void hiAvgExp(const Department dept[], int count)
{
    int maxAvg = 0;
    int maxIdx = 0;

    for (int i = 0; i < count; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += dept[i].faculty[j].yearOfExp;
        }

        float avg = sum/2;

        if (avg > maxAvg)
        {
            maxAvg = avg;
            maxIdx = i;
        }
    }
    
    cout<< "Department with highest average experience: " << dept[maxIdx].deptName << '\n';
    cout<< '\n';
}

// 5
void facwithGraterExp(const Department& dept)
{
    cout<< "Faculty with more than 10 years of experience in " << dept.deptName << ": \n";
    bool found = false;
    for (int i = 0; i < 2; i++)
    {
        if (dept.faculty[i].yearOfExp > 10)
        {
            cout<< "- " << dept.faculty[i].facultyName << "(" << dept.faculty[i].designation << ", " << dept.faculty[i].yearOfExp << " years) \n";
            found = true;
        } 
    }
    
    if (!found)
    {
        cout<< "No faculty member has more than 10 years of experience. \n";
    }
    
    cout<< '\n';

}

/*
    ================= Problem 1: Struct within struct =================
    Write a C++ program to manage information about a university department.
    1. Define a department struct with:
        . Department name
        . Total number of faculty
    2. A nested struct Faculty with: faculty name, designation, and years of experience.
    3. Store details of 3 departments, each having at least 2 faculty members
    4. Write a function to calculate and print the department with the highest average faculty
    experience
    5. Write another function to list all faculty members of a department whose experience is more
    than 10 years
*/


int main()
{

    Department dept[3];

    // 3
    // Department 1
    dept[0].deptName = "Chemical Engineering";
    dept[0].totalFaculty = 2;
    dept[0].faculty[0] = {"Dr. Farah Noor", "Professor", 9};
    dept[0].faculty[1] = {"Ms. Sana Ali", "Lecturer", 6};

    // Department 2
    dept[1].deptName = "Computer Science";
    dept[1].totalFaculty = 2;
    dept[1].faculty[0] = {"Dr. Bilal Ahmed", "Associate Professor", 18};
    dept[1].faculty[1] = {"Mr. Usman Raza", "Lecturer", 8};

    // Department 3
    dept[2].deptName = "Electrical Engineering";
    dept[2].totalFaculty = 2;
    dept[2].faculty[0] = {"Dr. Ahmed", "Professor", 15};
    dept[2].faculty[1] = {"Dr. Sara", "Assistant Professor", 12};
    
    // 4
    hiAvgExp(dept, 3);

    // 5
    for (int i = 0; i < 3; i++)
    {
        facwithGraterExp(dept[i]);
    }

    return 0;
}