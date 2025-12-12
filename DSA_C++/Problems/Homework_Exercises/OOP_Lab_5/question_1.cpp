#include <iostream>
using namespace std;

// 2
struct Faculty
{
    char profName[50];
    char designation[50];
    int yearOfExp;

};

// 1
struct Department
{
    char departName[50];
    int totalFaculties;

    // 3
    void setDeparts(const char depN[], int totlFac, const char profN[], const char desig[], int yoe)
    {

    }

};


int main()
{
/*
    ================= Problem =================
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
    Department d1, d2, d3;

    d1.setDeparts("Computer Science", 30, "Adul Basit", "Professor", 7);
    d2.setDeparts("Computer Science", 30, "Adul Basit", "Professor", 7);
    d2.setDeparts("Computer Science", 30, "Adul Basit", "Professor", 7);

    return 0;
}