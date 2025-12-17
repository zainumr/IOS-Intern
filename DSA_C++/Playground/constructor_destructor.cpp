#include <iostream>
using namespace std;

class Student
{
    public:
        int rollNo;
        string name;
        int age;
        int* demo;

        // default constructor
        Student()
        {
            cout<< "constructor is invoked\n";
            rollNo = 20;
            name = "John";
            age = 19;
        }

        // It stores the value that comes first and is nearest to its scope (in this case garbage value)
        // Student(int rollNo, string name, int age)
        // {
        //     rollNo = rollNo;
        //     name = name;
        //     age = age;
        // }

        // this keyword is a pointer used to point member variables (in this case will store in member varibale)
        Student(int rollNo, string name, int age)
        {
            this->rollNo = rollNo;
            this->name = name;
            this->age = age;
            demo = new int;
            *demo = 10;

        }

        // parameterize constructor
        // Student(int r, string n, int a)
        // {
        //     rollNo = r;
        //     name = n;
        //     age = a;
        // }

        // copy constructor
        // Student(Student& obj)
        // {
        //     rollNo = obj.rollNo;
        //     name = obj.name;
        //     age = obj.age;

        // }

        Student(int r, string n){}

        ~Student(){
            delete demo;
            demo = nullptr;
        }
        
        void display()
        {
            cout<< rollNo << " " << name << " " << age << '\n';
            cout<< *demo << '\n';

        }

};

// inline constructor
inline Student::Student(int r, string n)
{
    rollNo = r;
    name = n;
}




int main()
{
/*
    ================= Constructor Destructor =================
    1. A constructor is a special function that is called when an object is created.
    2. A constructor’s name must be the same as the class name.
    3. Constructor's doesn't have any data type.
    4. A constructor is used to initialize an object at the time it is created.

*/
    Student st1(23, "Bob", 24);
    st1.display();
    Student st2(54, "Ali", 22);
    st2.display();
    // Student st3(34, "Bilal");
    // st3.display();
    // Student st4(st2);
    // st4.display();





    return 0;
}