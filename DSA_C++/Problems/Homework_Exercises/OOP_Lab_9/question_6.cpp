#include <iostream>
using namespace std;

// 1
class Sports
{
protected:
    int sportScore;
public:
    void inputSports()
    {
        cout<< "Enter Sports Score: ";
        cin>> sportScore;
    }

    void displayScore()
    {
        cout<< "Sports Score: " << sportScore << '\n';
    }
};

class Academics
{
protected:
    int academicScore;
public:
    void inputAcademics()
    {
        cout<< "Enter Academic Score: ";
        cin>> academicScore;
    }

    void displayAcademics()
    {
        cout<< "Academic Score: " << academicScore << '\n';
    }
};

class Result : public Sports, public Academics
{
private:
    int totalScore;
public:
    void inputResult()
    {
        inputSports();
        inputAcademics();
    }

    void calculateTotal()
    {
        
        cout<< "--- Student Result ---\n";
        displayScore();
        displayAcademics();
        totalScore = sportScore + academicScore;
        cout<< "Total Score: " << totalScore << '\n';

    }
};

/*
    ================= Problem 6: Multiple Inheritance =================
    1. Base Class 1: Sports
        -> Data Members:
            . int sportScore
        -> Member Functions:
            . void inputSports() — to take sports score from the user
            . void displaySports() — to display sports score
    2. Base Class 2: Academics
        -> Data Members:
            . int academicScore
        -> Member Functions:
            . void inputAcademics() — to take academic score from the user
            . void displayAcademics() — to display academic score
    2. Derived Class: Result : public Sports, public Academics
        -> Data Members:
            . int totalScore
        -> Member Functions:
            . void calculateTotal() — adds sportScore + academicScore

    Program Requirements
    1. Create the classes as shown above.
    2. Use multiple inheritance (Result inherits from both Sports and Academics).
    3. Take scores as input from the user.
    4. Display total score using the derived class
*/

int main()
{
    Result r;
    r.inputResult();
    cout<< '\n';
    r.calculateTotal();


    return 0;
}