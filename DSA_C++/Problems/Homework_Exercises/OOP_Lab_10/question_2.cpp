#include <iostream>
using namespace std;

class Engine
{
private:
    int horsePower;
public:
    
    void inputEngine()
    {
        cout<< "Enter Horse Power: ";
        cin>> horsePower;
    }

    void displayEngine()
    {
        cout<< "Horse Power: " << horsePower << '\n';
    }  
};

class Car : private Engine
{
private:
    string model;
public:

    void inputStudent()
    {
        cout<< "Enter Car Model: ";
        getline(cin, model);
        inputEngine();
    }

    void displayStudent()
    {
        cout<< "--- Car Details ---\n";
        cout<< "Model: " << model << '\n';
        displayEngine();
    }
    
};

/*
    ================= Problem 1: Public Inheritance =================
    1. Base Class: Engine
        -> Data Members:
            . int horsePower
        -> Member Functions:
            . void inputEngine() – take horsepower
            . void displayEngine() – display horsepower
    2. Derived Class: Car : private Engine
        -> Data Members:
            . string model
        -> Member Functions:
            . void inputCar() – take model name and call inputEngine() internally
            . void displayCar() – display model name and call displayEngine()

    Program Requirements
    1. Implement classes using private inheritance.
    2. Try to call inputEngine() directly from main() using a Car object — note that it gives an error.
    3. Correctly access engine data through inputCar() (since engine is used internally).
*/

int main()
{
    Car c;
    c.inputStudent();
    cout<< '\n';
    c.displayStudent();


    return 0;
}