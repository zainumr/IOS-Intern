#include <iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
        
    }
    
    return true;
}

bool checkInclusion(string s1, string s2)
{
    // track frequence of s1 string
    int s1Freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        // int idx = s1[i] - 'a'; // s1[0] - 'a' -> 'a' - 'a' -> 97 - 97 -> = 0
        // s1Freq[idx]++; // s1Freq[26] = [1,0,0,0,....,0]
        s1Freq[s1[i] - 'a']++;
    }

    int s1WindowSize = s1.length(); 

    // compare s1 frequence with frequence of s2 string
    for (int i = 0; i < s2.length(); i++)
    {
        int s2Freq[26] = {0};
        int s1WindowIdx = 0, s2Idx = i;

        while (s1WindowIdx < s1WindowSize && s2Idx < s2.length())
        {
            s2Freq[s2[s2Idx] - 'a']++;
            s1WindowIdx++;
            s2Idx++;
        }

        if (isFreqSame(s1Freq, s2Freq))
        {
            return true;
        }
    }

    return false;
    
}

int main()
{
    string s1 = "ab";
    string s2 = "eidboaoo";

    cout<< checkInclusion(s1, s2) << '\n';


    return 0;
}