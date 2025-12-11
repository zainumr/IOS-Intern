#include <iostream>
using namespace std;

string removeOccur(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<< removeOccur(s, part) << '\n';

    cout<< s[2] << '\n';

    return 0;
}