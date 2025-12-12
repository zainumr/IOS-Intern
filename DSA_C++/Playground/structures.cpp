#include <iostream>
#include <cstring>
using namespace std;

union Department {
    char company[30];
    int exp;
};

struct Date {
    int day;
    char month[30];
    int year;
};

struct Employee {
    // members
    int id;
    char name[30];
    bool status;

    // nested struct
    Date dob;
    Department depart;
    

    // member func
    void setDataAppnetic(int ids, const char n[], int day, const char month[], int year, const char comp[], int exp)
    {
        id = ids;
        strcpy(name, n);
        dob.day = day;
        strcpy(dob.month, month);
        dob.year = year;
        strcpy(depart.company, comp);
        depart.exp = exp;
    }

    void setDataTricode(int ids, const char n[], int day, const char month[], int year, const char comp[], int exp)
    {
        id = ids;
        strcpy(name, n);
        dob.day = day;
        strcpy(dob.month, month);
        dob.year = year;
        strcpy(depart.company, comp);
        depart.exp = exp;
    }

    void display()
    {
        cout<< "Company: " << depart.company << '\n';
        cout<< "Id: " << id << '\n';
        cout<< "Name: " << name << '\n';
        cout<< "DOB: " << dob.day << "-" << dob.month << "-" << dob.year << '\n';
        cout<< "Experience: " << depart.exp << '\n';
        cout<< '\n';
    }

};

int main()
{
/*
    ================= Structures in C++ =================
    1. Stuctures are similar to Classes
    2. they are public by default but classes are private 
    3. Stuctures are use to group data of similar info
    4. Structures contains members like variables and function/methods

*/
    // created object
    Employee e1, e2;
    Employee* ptr;
    e1.id = 999;
    e1.setDataAppnetic(3456, "Zain", 12, "Dec", 2001, "Appnetic", 3);
    e1.display();
    

    // struct to pointer
    ptr = &e2;
    ptr->setDataTricode(987, "Ahmad", 8, "May", 2003, "Tricode", 2);
    ptr->display();

    return 0;
}