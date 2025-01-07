// Source : https://leetcode.com/problems/is-subsequence
// Date : 2024-01-07

/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
*/

#include <string>
using namespace std;

class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        size_t sizeS = s.size();
        size_t sizeT = t.size();

        size_t i = 0, j = 0;

        while (i < sizeS && j < sizeT)
        {
            if (s[i] == t[j])
            {
                ++i;
            }
            ++j;
        }

        return i == s.size();
    }
};