#include <iostream>
#include <string>
using namespace std;

// 1
class Logger
{
private:
    // static Logger* instance;
    Logger(){}
public:
    // static Logger* getInstance()
    // {
    //     if (instance == nullptr)
    //     {
    //         instance = new Logger();
    //     }
    //     return instance;
    // }

    static Logger& getInstance()
    {
        static Logger instance;
        return instance;
    }

    void logMessage(const string& msg)
    {
        cout << "[LOG] " << msg << '\n';
    }

    void logErrorMsg(const string& msg)
    {
        cout << "[LOG] Error: " << msg << '\n';
    }
};

// Logger* Logger::instance = nullptr;



/*
    ================= Problem 5: Private Constructor =================
    Create a C++ program:
    1. Implement a Logger class with a private constructor.
    2. Provide a static function getInstance() to return the single object.
    3. Add a function logMessage(string) to print messages.
    4. (Take input from user for 2 messages and display them using the single logger instance).
*/

int main()
{
    string m1, m2;

    // Logger* msg = Logger::getInstance();
    Logger& msg = Logger::getInstance();

    cout<< "Enter a message: ";
    getline(cin, m1);
    

    cout<< "Enter a message: ";
    getline(cin, m2);

    msg.logMessage(m1);
    msg.logErrorMsg(m2);


    return 0;
}