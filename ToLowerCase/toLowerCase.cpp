// Source : https://leetcode.com/problems/to-lower-case
// Date : 2024-01-05

/*
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely"
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string toLowerCase(string s) 
    {
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] - 'A' + 'a';
            }
        }

        return s;
    }
};