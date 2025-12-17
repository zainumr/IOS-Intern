#include <iostream>
using namespace std;

// 1
enum Weekday
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// 4 (helper function)
string getDayName(int day)
{
    switch (day)
    {
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
        case Sunday: return "Sunday";
        default: return "Invalid";
    }
}

/*
    ================= Problem 5: Enum =================
    Write a C++ program to use enumeration for weekdays.
    1. Define an enum Weekday { MONDAY, TUESDAY, ..., SUNDAY }
    2. Ask the user for today’s day (using the enum)
    3. Ask the user to enter a number N (days later)
    4. Calculate and display the day of the week that comes N days later
    5. Handle wrap-around correctly (e.g., if today is Saturday and N = 3, result should be Tuesday)
*/

int main()
{
    // 2
    int today, daysLater;

    cout<< "Enter day: ";
    cin>> today;

    if (today < 1 || today > 7)
    {
        cout<< "Invalid Day!\n";
        return -1;
    }
    
    // 3
    cout<< "Enter day later: ";
    cin>> daysLater;

    // 4 // 5
    int futureDay = today + daysLater;
    cout<< "Today is: " << getDayName(today) << '\n';
    cout<< "Day after " << daysLater << " days: " << getDayName(futureDay) << '\n';

    return 0;
}