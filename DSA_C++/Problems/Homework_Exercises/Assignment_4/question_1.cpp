#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string bloodGroup;
public:
    Person(string n, string bg) : name(n), bloodGroup(bg) {}

    virtual void displayBG()
    {
        cout<< "Name: " << name << ", Blood Group: " << bloodGroup << '\n';
    }

    virtual ~Person()
    {
        cout<< "Person object is destroyed!\n";
    }

};

class A : public Person
{
public:
    A(string n, string bg) : Person(n, bg) {}

    void displayBG()
    {
        cout<< "Name: " << name << ", Blood Group: " << bloodGroup << '\n';
    }

    ~A()
    {
        cout<< "A object is destroyed: " << name << '\n';
    }

};

class B : public Person
{
public:
    B(string n, string bg) : Person(n, bg) {}

    void displayBG()
    {
        cout<< "Name: " << name << ", Blood Group: " << bloodGroup << '\n';
    }

    ~B()
    {
        cout<< "B object is destroyed: " << name << '\n';
    }

};

class C : public Person
{
public:
    C(string n, string bg) : Person(n, bg) {}

    void displayBG()
    {
        cout<< "Name: " << name << ", Blood Group: " << bloodGroup << '\n';
    }

    ~C()
    {
        cout<< "C object is destroyed: " << name << '\n';
    }

};




/*
    ================= Problem: 1 =================
    Write a Person class having the following:
    1. String Name
    2. Blood group
    3. Pure Virtual Display Blood group method
    Inherit the following classes from Person having the same attributes and behavior of Person
    (polymorphism).
    1. A
    2. B
    3. C
    Task:
    1. From main(), display blood group of each person on the console using Pointer of base class to
    the derived class.
    Write destructor when you realize that this is the end of program.
*/

int main()
{
    Person* p1 = new A("Zain", "O +ve");
    Person* p2 = new B("Ali", "A -ve");
    Person* p3 = new C("Blial", "B +ve");

    p1->displayBG();
    p2->displayBG();
    p3->displayBG();

    cout<< '\n';

    delete p1;
    cout<< '\n';

    delete p2;
    cout<< '\n';
    
    delete p3;


    return 0;
}