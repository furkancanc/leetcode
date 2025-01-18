// Source : https://leetcode.com/problems/reverse-words-in-a-string-iii
// Date : 2024-01-14

/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string reverseWords(string s) 
    {
        int idx = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ') 
            {
                reverse(s.begin() + idx, s.begin() + i);
                idx = i + 1;
            }

        }

        reverse(s.begin() + idx, s.end());
        return s;
    }
};