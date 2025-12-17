#ifndef QUESTION_3_HEADER_H
#define QUESTION_3_HEADER_H

#include <string>
using namespace std;

// 1
class Student
{
private:
    string name;
    float marks;
public:
    // 2
    Student(string n, float m);

    void display();

};

#endif
