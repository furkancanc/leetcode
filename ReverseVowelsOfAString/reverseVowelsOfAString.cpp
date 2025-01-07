// Source : https://leetcode.com/problems/reverse-vowels-of-a-string
// Date : 2024-01-07

/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string reverseVowels(string s) 
    {
        int startIdx = 0;
        int endIdx = s.size() - 1;

        while (startIdx < endIdx)
        {
            while (startIdx < endIdx && !isVowel(s[startIdx])) ++startIdx;
            while (startIdx < endIdx && !isVowel(s[endIdx])) --endIdx;

            if (startIdx < endIdx)
            {
                swap(s[startIdx], s[endIdx]);
                ++startIdx;
                --endIdx;
            }
        }

        return s;
    }

    bool isVowel(char c)
    {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
               c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
               c == 'u' || c == 'U'; 
    }
};