// Source : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string
// Date : 2024-01-06

/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

#include <string>
#include <iostream>
using namespace std;

class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        size_t haystack_length = haystack.length();
        size_t needle_length   = needle.length();

        if (haystack_length < needle_length) return -1;

        for (size_t i = 0; i <= haystack_length - needle_length; ++i)
        {
            if (haystack.substr(i, needle_length) == needle)
            {
                return i;
            }
        }

        return -1;        
    }
};
