#include <iostream>
using namespace std;

int main()
{

/*
    ================= Strings & Characters Arrays =================
    1. '\0' null char is used to terminate char array

    
    ===============================================================

    char str[] = {'a','b','c','\0', 'd', 'e'};
    cout<< str << '\n';
    cout<< strlen(str) << '\n';

    char str[] = "hello"; // this string will be stored as a single char in memory -> |'h'|'e'|'l'|'l'|'o'| 
    cout<< str << '\n';
    cout<< strlen(str) << '\n'; // 5 -> because compiler will automatically adds null char at the end of string
    cout<< str[1] << '\n'; // e
    cout<< str[5] << '\n'; // null char

    char str[] = "do what you want";
    for (char ch : str)
    {
        cout<< ch << ' ';
    }
    cout<< '\n';
    cout<< str << '\n';

    char str[100];
    cout<< "Enter char array: ";
    cin>> str; // will terminate all the string after space
    cin.getline(str, 100);
    cin.getline(str, 100, '$'); // built in func .getline(name, length, delimiter)
    cout<< "output: " << str << '\n';

*/

    string str = "every day is a chance to be better";
    
    // concatenation
    string str1 = "well";
    string str2 = "said";
    string str3 = str1 + str2;
    
    // we can make comparison 
    string str4 = "Real madrid👑";
    string str5 = "Barcelona💩";
    // cout << (str4 == str5) << '\n';
    // cout << (str4 > str5) << '\n';

    // cout << str4.length() << '\n';

    string name;
    // cout<< "Enter your name: ";
    // getline(cin, name);

    vector<char> s = {'a','b','c'};

    int st = 0, end = s.size()-1;
    while(st < end)
    {
        swap(s[st++], s[end--]);
    }

    string s1 = "hello";
    reverse(s1.begin(), s1.end());

    cout<< s1 << '\n';
    

    return 0;
}