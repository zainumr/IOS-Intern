#include <iostream>
using namespace std;

// 1
struct Students {
    int rollNo;
    char name[30];
    float marks;

    // 2
    void setData(int r, const char n[], float m)
    {   
        rollNo = r;
        strcpy(name, n);   // copy char array into member
        marks = m;
        
    }

    void display()
    {
        cout<< "Roll No: " << rollNo << '\n';
        cout<< "Name: " << name << '\n';
        cout<< "Marks: " << marks << '\n';
        cout << '\n';
    }



};

/*
    ================= Problem =================
    1. Define a structure Student with the following members:
        . int rollNo
        . char name[30]
        . float marks
    2. Add member functions:
        . setData(int r, const char n[], float m) → to assign values to the data members.
        . display() → to print student details.
    3. In main():
        . Create 3 student objects.
    4. Use setData() to assign values.
    5. Display all student details using display().
*/
  

int main()
{  
    // 3
    Students s1, s2, s3;

    // 4
    s1.setData(1, "hi", 85.5);
    s2.setData(2, "Sara", 91);
    s3.setData(3, "Hamza", 77);

    // 5
    s1.display();
    s2.display();
    s3.display();
    
    cout<< "Total Students Created = " << 3 << '\n';
    
    return 0;
}