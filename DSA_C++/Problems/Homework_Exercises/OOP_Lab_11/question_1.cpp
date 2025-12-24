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
        cout<< "Horse Power: " << horsePower << "cc\n";
    }  
    
};

class Car
{
private:
    Engine engine;
    string model;
public:
    void inputCar()
    {
        cout<< "Enter Model Name: ";
        getline(cin, model);
        engine.inputEngine();
    }

    void displayCar()
    {
        cout<< "Model Name: " << model << '\n';
        engine.displayEngine();
    }  
    
};



/*
    ================= Problem: 1 =================
    Base Class: Engine
        •	Data Members:
        •	int horsePower
        •	Member Functions:
        •	void inputEngine() – take horsepower input
        •	void displayEngine() – display horsepower

    Composite Class: Car
        •	Data Members:
        •	string model
        •	Engine engine (Composition – Car has an Engine)
        •	Member Functions:
        •	void inputCar() – take model name and call inputEngine() internally
        •	void displayCar() – display model name and call displayEngine() internally

    Program Requirements
        •	Implement the classes using composition (Car has an Engine).
        •	Ensure that inputEngine() and displayEngine() are accessed only through the Car object.
        •	Correctly display car details by calling displayCar() in main().
*/

int main()
{
    Car c1;
    c1.inputCar();
    cout<< '\n';
    c1.displayCar();


    return 0;
}