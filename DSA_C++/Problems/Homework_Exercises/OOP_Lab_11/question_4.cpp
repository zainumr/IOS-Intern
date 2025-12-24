#include <iostream>
using namespace std;

class Driver
{
protected:
    string name;
public:
    Driver()
    {
        cout<< "Driver object created\n";
    }
    void inputDriver()
    {
        cout<< "Enter driver name: ";
        getline(cin, name);
    }

    void displayDriver()
    {
        cout<< "Driver name: " << name << '\n';
    }

    ~Driver()
    {
        cout<< "Driver object destroyed\n";
    }
    
};

class Bus
{
private:
    Driver* driver;
    string route;
public:
    Bus()
    {
        cout<< "Bus object created\n";
        driver = nullptr;
    }

    void assignDriver(Driver* d)
    {
        driver = d;
    }

    void inputBus()
    {
        cout<< "Enter route: ";
        getline(cin, route);
    }

    void displayBus()
    {
        cout<< "Route: " << route << '\n';
        if (driver != nullptr)
        {
            driver->displayDriver();
        }
        else
        {
            cout<< "No deriver assigned!\n";
        }
        
    }

    ~Bus()
    {
        cout<< "Bus object destroyed\n";
    }
    
};



/*
    ================= Problem: 4 =================
    Associated Class: Driver
        •	Data Members:
        •	string name
        •	Member Functions:
        •	Constructor – display “Driver object created”
        •	void inputDriver() – take driver name
        •	void displayDriver() – display driver name
        •	Destructor – display “Driver object destroyed”

    Main Class: Bus
        •	Data Members:
        •	string route
        •	Driver* driver (Aggregation – Bus uses a Driver but does not own it)
        •	Member Functions:
        •	Constructor – display “Bus object created”
        •	void assignDriver(Driver* d) – assign a driver to the bus
        •	void inputBus() – take route name
        •	void displayBus() – display route and driver details
        •	Destructor – display “Bus object destroyed”

    Program Requirements
        •	Implement aggregation: Bus uses a Driver object passed from main().
        •	Observe and explain that the Driver object’s lifetime is independent of the Bus.
        •	Print constructor and destructor messages to confirm the destruction order.
*/

int main()
{
    Driver d1;        // Independent object
    d1.inputDriver();

    cout << '\n';

    Bus b1;           // Aggregate object
    b1.inputBus();

    b1.assignDriver(&d1);   // Association 

    cout << '\n';
    b1.displayBus();


    return 0;
}