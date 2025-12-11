#include <iostream>
using namespace std;

string reverseWords(string s)
{
    string reversedStr = "";

    reverse(s.begin(), s.end()); // "eulb si yks eht"

    for (int i = 0; i < s.length(); i++)
    {

        string word = "";
        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0)
        {
            reversedStr += " " + word;
        }
        
    }

    return reversedStr.substr(1);
}

int main()
{
    string s = "a      Tt98F8cl       2ZqzzN      9ScQuGTD       4zF18c   U5wrw62z    KV1 q     WK1Asi       S4hiKPi2Y  l      XZCvURMnY  I3   llmjK3AVT F    eaiDa     N6Rc 8QOxU P0ieWh ta";

    cout<< reverseWords(s) << '\n';


    return 0;
}