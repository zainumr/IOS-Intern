#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    double salary;
public:

    void input()
    {
        cout<< "Enter Employee Name: ";
        cin>> name;

        cout<< "Enter Employee Salary: ";
        cin>> salary;
    }

    void calculateBonus()
    {
        input();
        cout<< "Bonus calculation: General Employee - 5% of salary\n";
    }

    void showDetails()
    {
        cout<< "Name: " << name << '\n';
        cout<< "Salary: " << salary << '\n';
    } 
};

class Manager : public Employee
{
private:
    double bonus;
public:

    void input()
    {
        cout<< "Enter Manager Name: ";
        cin>> name;

        cout<< "Enter Manager Salary: ";
        cin>> salary;
    }

    void calculateBonus()
    {
        input();
        bonus = 0.20 * salary;
        cout<< "Bonus calculation: Manager - 20% of salary\n";
    }

    void showManagerDetails()
    {
        cout<< "Bonus: " << bonus << '\n';
    } 
};

/*
    ================= Problem 5: Method Overriding =================
    1. Base Class: Employee
        -> Data Members:
            . string name
            . double salary
        -> Member Functions:
            . void input() – takes employee name and salary from the user
            . void showDetails() – displays name and salary
            . void calculateBonus() – prints: "Bonus calculation: General Employee - 5% of salary"
    2. Derived Class: Manager : public Employee
        -> Data Members:
            . double bonus
        -> Member Functions:
            . void calculateBonus() – overrides base version and calculates: bonus = 0.20 * salary
            and prints: "Bonus calculation: Manager - 20% of salary"
            . void showManagerDetails() – displays name, salary, and bonus

    Program Requirements
    1. Create both classes as above using public inheritance.
    2. Create one Employee object and one Manager object.
    3. Call calculateBonus() on both objects.
    o Observe that Employee version runs for emp
*/

int main()
{
    Employee emplpyee;
    Manager manager;
    emplpyee.calculateBonus();
    cout<< '\n';
    manager.calculateBonus();


    return 0;
}