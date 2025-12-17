#include <iostream>
using namespace std;

// 1
typedef struct Car
{
    string model;
    int year;
    int egineCapacity;
    int price;
} Car;

// 3
void displayCarsByEC(Car carsSpecs[])
{
    cout<< "Cars with Engine Capacity > 1500cc:\n";

    for (int i = 0; i < 5; i++)
    {
        if (carsSpecs[i].egineCapacity > 1500)
        {
            cout<< "- " << carsSpecs[i].model << " (" << carsSpecs[i].year << ") - " << carsSpecs[i].egineCapacity << "cc - Rs. " << carsSpecs[i].price << '\n';
        }
        
    }

    cout<< '\n';
    
}

// 4
void dispalyOldestCar(Car carsSpecs[])
{
    int oldest;
    for (int i = 0; i < 5-1; i++)
    {
        oldest = i;
        for (int j = i+1; j < 5; j++)
        {
            if (carsSpecs[i].year > carsSpecs[j].year)
            {
                oldest = j;
            }
        }
    }

    cout<< "Oldest Car: " << carsSpecs[oldest].model << " (" << carsSpecs[oldest].year << ") - " << carsSpecs[oldest].egineCapacity << " - Rs. " << carsSpecs[oldest].price << '\n';
    cout<< '\n';
    
}

// 5
void displayAvgPrice(Car carsSpecs[])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += carsSpecs[i].price;
    }

    int avg = sum/5;
    cout<< "Average Price of Cars: Rs. " << avg << '\n';
    
}

/*
    ================= Problem 6: Typedef =================
    Write a C++ program to manage car information using typedef.
    1. Use typedef to define a struct Car with: Model, Year, EngineCapacity, and Price
    2. Store details of 5 cars in an array of this struct
    3. Write a function to display all cars with EngineCapacity > 1500cc
    4. Write a function to find and display the car with the oldest year
    5. Write a function to calculate and display the average price of all cars
*/

int main()
{
    // 2
    Car carsSpecs[5];

    carsSpecs[0] = {"Honda Civic", 2019, 1800, 3200000};
    carsSpecs[1] = {"Toyota Corolla", 2020, 1600, 2800000};
    carsSpecs[2] = {"Haval Jolion", 2024, 1500, 9900000};
    carsSpecs[3] = {"Hyundai Tucson", 2019, 1500, 12000000};
    carsSpecs[4] = {"Suzuki Mehran (Boss)", 2008, 800, 700000};

    displayCarsByEC(carsSpecs);
    dispalyOldestCar(carsSpecs);
    displayAvgPrice(carsSpecs);

    return 0;
}