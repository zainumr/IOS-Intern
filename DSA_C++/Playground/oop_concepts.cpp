#include <iostream>
using namespace std;

// ======== Encapsulation ========
class BankAccount
{

// access specifires
private:
    float balance;
public:
    string accountHolder;
    long int accountNo;
    int branchCode;

    BankAccount() {}

    BankAccount(string accountHolder, long int accountNo, int branchCode, float balance)
    {
        this->accountHolder = accountHolder;
        this->accountNo = accountNo;
        this->branchCode = branchCode;
        this->balance = balance;
    }

    // access function (Getter)
    void getInfo()
    {
        cout<< "Name: " << accountHolder << '\n';
        cout<< "Account No: " << accountNo << '\n';
        cout<< "Branch Code: " << branchCode << '\n';
        cout<< "Balance: " << balance << '\n';
    }

};

// ======== Inheritance ========
// -> Single Inheritance (One base → one derived)
class Person
{  
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;

    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

    void getInfo()
    {
        cout<< "Name: " << name << '\n';
        cout<< "Age: " << age << '\n';
        cout<< "Roll No: " << rollno << '\n';
    }

    
};

// -> Multilevel Inheritance (Class inherits from a derived class)
class Teacher : public Student
{

public:
    string subject;

    Teacher(string name, int age, int rollno, string subject) : Student(name, age, rollno)
    {
        this->subject = subject;
    }

    void getInfo()
    {
        cout<< "Name: " << name << '\n';
        cout<< "Subject: " << subject << '\n';
    }
};

// -> Multiple Inheritance (Derived class inherits from multiple base classes)
class University
{
public:
   string uniName;
   int batch;
   int currSemster;

};

class Admin : public Person , public University
{
public:
    string dept;

    Admin(string name, int age, string uniName, int batch, int currSemster, string dept) : Person(name, age)
    {
        this->dept = dept;
    }

    void getInfo()
    {
        cout<< "Name: " << name << '\n';
        cout<< "Age: " << age << '\n';
        cout<< "University: " << uniName << '\n';
        cout<< "Batch: " << batch << '\n';
        cout<< "Semester: " << currSemster << '\n';
        cout<< "Department: " << dept << '\n';
    }
    
};

// -> Hierarchical Inheritance (Multiple derived classes from one base class)
class Vehicle
{
protected:
    string brand;
    string color;
    int maxSpeed;
public:
    Vehicle(string b, string c, int s) : brand(b), color(c), maxSpeed(s) { }

    void showVehicle()
    {
        cout<< "Brand: " << brand << '\n';
        cout<< "Color: " << color << '\n';
        cout<< "Max Speed: " << maxSpeed << '\n';
    }
};

class Bike : public Vehicle
{
private:
    bool hasCarrier;
public:
    Bike(string b, string c, int maxSpeed, bool carrier) : Vehicle(b, c, maxSpeed), hasCarrier(carrier) { }

    void showBikeInfo()
    {
        showVehicle();
        cout<< "Carrier: " << (hasCarrier ? "Yes" : "No") << "\n\n";
    }
};

class Car : public Vehicle
{
private:
    int doors;
public:
    Car(string b, string c, int maxSpeed, int d) : Vehicle(b, c, maxSpeed), doors(d) { }

    void showCarInfo()
    {
        showVehicle();
        cout<< "Doors: " << doors << '\n';
    }
};







/*
    ================= OOP: 4 pillars =================
    1. Encapsulation:
        . Encapsulation is the concept of binding data (variables) and the functions that 
        operate on that data into a single unit called a class, and restricting direct access 
        to the data.
        . Hide data 
        . Allow controlled access
        . Encapsulation is implimented using access specifires
            -> Private
            -> Protected
            -> Public
            -> Getter and Setter (access functions)

    2. Inheritance:
        . Inheritance is an OOP concept in which a new class (derived class) acquires the 
        properties and behaviors of an existing class (base class).
        . Reuse existing code
        . Reduce duplication
        . Extend functionality
        . Types of Inheritance
            -> Single Inheritance (One base → one derived)
            -> Multilevel Inheritance (Class inherits from a derived class)
            -> Multiple Inheritance (Derived class inherits from multiple base classes)
            -> Hierarchical Inheritance (Multiple derived classes from one base class)
            -> Hybrid Inheritance (Multiple derived classes from one base class)


*/

int main()
{   
    // BankAccount account;
    // account.balance = 45789.89 // balance is private member

    // BankAccount account("Zain Umer", 823648762876, 576, 45789.89);
    // account.getInfo();

    // Studdent s1("Ali", 23, 145);
    // s1.getInfo();

    // Teacher t1("Prof. Ahmed", 24, 567, "OOP");
    // t1.getInfo();

    // Admin a1("Bilal", 24, "FAST", 2024, 2, "Computer Science");
    // a1.getInfo();

    cout<< "===== Bike =====\n";
    Bike b1("Honda", "Red", 110, "Yes");
    b1.showBikeInfo();

    cout<< "===== Car =====\n";
    Car c1("Toyota", "Black", 180, 4);
    c1.showCarInfo();

    return 0;
}