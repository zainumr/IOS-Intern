#include <iostream>
using namespace std;

class Battery
{
private:
    int capacity;
public:
    Battery()
    {
        cout<< "Battery Created\n";
    }

    void inputBattery()
    {
        cout<< "Enter Battery Capacity: ";
        cin>> capacity;
    }

    void displayBattery()
    {
        cout<< "Battery Capacity: " << capacity << " mAH\n";
    }
    
    ~Battery()
    {
        cout<< "Battery destroyed\n";
    }
    
};

class Laptop
{
private:
    Battery battery;
    string brand;
public:
    Laptop()
    {
        cout<< "Laptop Created\n";
    }

    void inputLaptop()
    {
        cout<< "Enter Laptop Brand: ";
        getline(cin, brand);
        battery.inputBattery();
    }

    void displayLaptop()
    {
        cout<< "Laptop Brand: " << brand << '\n';
        battery.displayBattery();
    }
    
     ~Laptop()
    {
        cout<< "Laptop destroyed\n";
    }
    
};



/*
    ================= Problem: 2 =================
     Base Class: Battery
        •	Data Members:
        •	int capacity
        •	Member Functions:
        •	Constructor – display “Battery created”
        •	void inputBattery() – take capacity from user
        •	void displayBattery() – display capacity
        •	Destructor – display “Battery destroyed”

    Composite Class: Laptop
        •	Data Members:
        •	string brand
        •	Battery battery (Composition – Laptop has a Battery)
        •	Member Functions:
        •	Constructor – display “Laptop created”
        •	void inputLaptop() – take brand and call inputBattery() internally
        •	void displayLaptop() – display brand and call displayBattery()
        •	Destructor – display “Laptop destroyed”

    Program Requirements
        •	Implement composition: Laptop contains a Battery object.
        •	Show constructor and destructor messages for both classes.
        •	Observe and explain the order in which constructors and destructors are called.
*/

int main()
{
    Laptop l1;
    l1.inputLaptop();
    cout<< '\n';
    l1.displayLaptop();


    return 0;
}