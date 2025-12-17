#include "question_3_header.h"
#include <iostream>
using namespace std;


Student::Student(string n, float m) {
    name = n;
    marks = m;
}

void Student::display()
{
    cout<< "Name: " << name << '\n';
    cout<< "Marks: " << marks << '\n';
}




