#include <iostream>
using namespace std;

// 1
class Car
{
private:
    string modelName;
    static int totalCars;
public:

    // 2
    Car(string newModel)
    {
        modelName = newModel;
        totalCars++;
    }

    // 3
    static int getCars()
    {
        return totalCars;
    } 

    void display()
    {
        cout<< "Car Model: " << modelName << '\n';
    }
   
};

int Car::totalCars = 0;

/*
    ================= Problem 4: Static keyword =================
    Create a C++ program:
    1. Make a class Car with attributes modelName and a static variable totalCars.
    2. Increment totalCars whenever a new car object is created.
    3. Add a static function to display total number of cars created.
    4. (Take input from user for car models, then show total cars at the end).
*/

int main()
{
    // 4
    string carModel;

    cout<< "Enter Car Model: ";
    getline(cin, carModel);
    Car c1(carModel);
    

    cout<< "Enter Car Model: ";
    getline(cin, carModel);
    Car c2(carModel);

    cout<< "Enter Car Model: ";
    getline(cin, carModel);
    Car c3(carModel);

    cout<< '\n';

    c1.display();
    c2.display();
    c3.display();

    cout<< '\n';
        
    cout<< "Total Cars Created: " << Car::getCars() << '\n';


    return 0;
}