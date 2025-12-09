#include <iostream>
using namespace std;

bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }

    return false;
}

bool isPalindrome(string str)
{
    int st = 0, end = str.length()-1;
    
    while (st < end)
    {
        // isAlphaNum(str[st])
        if (!std::isalnum(str[st]))
        {
            st++; continue;
        }
        if (!std::isalnum(str[end]))
        {
            end--; continue;
        }

        if (tolower(str[st]) != tolower(str[end]))
        {
            return false;
        }

        st++;
        end--;
    }
    
    

    return true;
    
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    cout<< isPalindrome(str) << '\n';

    return 0;
}