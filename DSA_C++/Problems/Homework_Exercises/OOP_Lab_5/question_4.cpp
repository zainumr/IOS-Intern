#include <iostream>
using namespace std;

// 1
union Data
{
    int employeeID;
    float salary;
    char grade;
};

// 5
struct Emp
{
    int employeeID;
    float salary;
    char grade;
};


// 2
struct Employee
{
    Data data;
    int code;

    enum Code {
        ID = 1,
        SALARY = 2,
        GRADE = 3
    };
};

// 4
void emplyeeRecords(Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        switch (employees[i].code)
        {
        case 1:
            cout<< "[ID] Employee ID: " << employees[i].data.employeeID << '\n';
            break;
        case 2:
            cout<< "[Salary] Employee Salary: " << employees[i].data.salary << '\n';
            break;
        case 3:
            cout<< "[Grade] Employee Salary: " << employees[i].data.grade << '\n';
            break;
        default:
            cout<< "Invalid Code\n";
        }
        
    }
    
}



int main()
{
/*
    ================= Problem 4: Union =================
    Write a C++ program to demonstrate the use of union for employee records.
    1. Define a union Data with:
        . int employeeID
        . float salary
        . char grade
    2. Create a struct Employee that contains:
        . A union Data
        . An integer code (1 → ID, 2 → salary, 3 → grade)
    3. Store details of 5 employees where each employee has only one valid field indicated
    by the code
    4. Write a function to display employee records correctly based on their code
    5. Also print the size of the union and compare it with an equivalent struct
*/

    // 3
    Employee employees[5];
    int n = 5;
    
    employees[0].code = Employee :: ID;
    employees[0].data.employeeID = 101;

    employees[1].code = Employee :: SALARY;
    employees[1].data.salary = 72000;

    employees[2].code = Employee :: GRADE;
    employees[2].data.grade = 'B';

    employees[3].code = Employee :: ID;
    employees[3].data.employeeID = 202;

    employees[4].code = Employee :: SALARY;
    employees[4].data.salary = 65000;

    emplyeeRecords(employees, n);

    // 5
    cout<< "Size of union: " << sizeof(Data) << '\n';
    cout<< "Size of union: " << sizeof(Emp) << '\n';

    return 0;

}