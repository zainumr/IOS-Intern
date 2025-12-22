#include <iostream>
#include <string>
using namespace std;

// 1
class Student
{
protected:
    int rollNo;
    string name;
    float marks[3];
    float avg;
    string grade;
    static int totalStudents;
public:
    Student()
    {
        rollNo = 0;
        name = "";
        for (int i = 0; i < 3; i++)
        {
            marks[i] = 0;
        }
        
        avg = 0;
        grade = "...";
        ++totalStudents;
    }

    // Student(int rollNo, string name, float marks[])
    // {
    //     this->rollNo = rollNo;
    //     this->name = name;

    //     for (int i = 0; i < 3; i++)
    //     {
    //         this->marks[i] = marks[i];
    //     }
    
    //     calculateResult();
    //     ++totalStudents;
    // }

    void inputData()
    {
        cout<< "Enter Roll No: ";
        cin>> rollNo;

        cout<< "Enter Name: ";
        cin>> name;

        cout<< "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin>> marks[i];
            cout<< " ";
        }
        cout<< '\n';

        calculateResult();
    } 

    void calculateResult()
    {
        float sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        
        avg = sum/3;

        if (avg >= 90) grade = "A+";
        else if (avg >= 85) grade = "A";
        else if (avg >= 80) grade = "B+";
        else if (avg >= 60)  grade = "B";
        else if (avg >= 50)  grade = "C";
        else grade = "F";
    }

    Student& updateMarks()
    {
        int idx, newMarks;

        cout<< "Enter subject number: (1-3): ";
        cin>> idx;

        cout<< "Enter New Marks: ";
        cin>> newMarks;
        cout<< '\n';

        idx--; 

        if (idx >= 0 && idx < 3)
        {
            marks[idx] = newMarks;
        }

        calculateResult();

        return *this;
    }

    void displayData() const
    {
        cout<< "Roll No: " << rollNo << " | ";
        cout<< "Name: " << name << " | ";
        cout<< "Average: " << avg << " | ";
        cout<< "Grade: " << grade << "\n";
    }

    string getName() { return name; }
    float getAvg() { return avg; }
    float getRollNo() { return rollNo; }

    static void showTotalStudents()
    {
        cout<< "Total Student Created: " << totalStudents << " ---\n";
    }

    ~Student()
    {
        cout<< "Student [" << rollNo << "] destroyed.\n";
    }
};

int Student::totalStudents = 0;

class Classroom
{
private:
    string className;
    Student students[5];
    int studentCount;
    
public:
    Classroom(string className)
    {
        this->className = className;
        studentCount = 0;
    }

    void setStudentCount(int studCount) { studentCount = studCount; }
    int getStudentCount() { return studentCount; }

    void setStudentCount()
    {
        cout<< "Total Student Created: " << studentCount << "\n\n";
    }

    void addStudents()
    {   
        for (int i = 0; i < studentCount; i++)
        {
            cout<< "--- Enter Details for Student " << i+1 << " ---\n\n";
            students[i].inputData();
        }
    }

    void showAllStudents() const
    {
        cout<< "=============== CLASSROOM: " << className << " ===============\n";
        for (int i = 0; i < studentCount; i++)
        {
            students[i].displayData();
        }
        cout<< "--------------------------------------------------\n\n";
    }

    void findTopper()
    {
        int topperIdx = 0;
        
        for (int i = 1; i < studentCount; i++)
        {
            if (students[i].getAvg() > students[topperIdx].getAvg())
            {
                topperIdx = i;
            }
        }
        cout<< "Topper: " << students[topperIdx].getName() << " (Roll No: " << students[topperIdx].getRollNo() << ") with Average: " << students[topperIdx].getAvg() << "\n\n";
    }
    
    void updateStudent()
    {
        int rollno;
        cout<< "Enter Roll No to update: ";
        cin>> rollno;

        for (int i = 0; i < studentCount; i++)
        {
            if (students[i].getRollNo() == rollno)
            {
                students[i].updateMarks().displayData();
                cout<< '\n';
            }
        }
        cout<< "Marks updated successfully using function chaining!\n\n";
    }

    const void classAverage()
    {
        if (studentCount == 0) cout<< 0 << "\n\n";
        
        int sum = 0;
        for (int i = 0; i < studentCount; i++)
        {
            sum += students[i].getAvg();
        }
        cout<< "Class Average Marks: " << (sum / studentCount) << "\n\n";
    }
};

class Logger
{
private:
    static Logger* instance;
    static int logCount;
    Logger() {}
public:
    static Logger* getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Logger();
        }
        return instance;
    }

    void logMessage(const string& msg)
    {
        cout<< "[Logger " << ++logCount << "] " << msg << '\n';
    }

};

Logger* Logger::instance = 0;
int Logger::logCount = 0;



/*
    ================= Problem 1 =================
    3. Use addStudents() to input data for 5 students.
    4. Display all student data using showAllStudents().
    5. Allow user to update marks for one student using updateStudent() (show function chaining).
    6. Show class average and topper.
    7. Show total students using static function.
    8. Use Logger messages at each major step.
    9. At program end, observe destructor messages.
*/

int main()
{
    Logger* logger = Logger::getInstance();

    cout<< "=== STUDENT MANAGEMENT SYSTEM ===\n\n";

    logger->logMessage("System Started.");

    string className;
    cout<< "Enter Classroom Name: ";
    cin>> className;
    Classroom c1(className);
    cout<< "\n";

    int studentCount;
    cout << "Enter number of students (max 5): ";
    cin >> studentCount;
    c1.setStudentCount(studentCount);
    cout<< '\n';

    
    if (c1.getStudentCount() >= 1 && c1.getStudentCount() <= 5)
    {
        c1.addStudents();
        
        logger->logMessage("All students records added successfully!");
        c1.showAllStudents();

        logger->logMessage("Updating student marks...");
        c1.updateStudent();

        logger->logMessage("Finding class topper...");
        c1.findTopper();

        c1.classAverage();
        
        c1.setStudentCount();
    }
    else 
    {
        cout<< "Invaild Students!\n\n";
    }
    




    

    return 0;
}