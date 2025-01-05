// Source : https://leetcode.com/problems/valid-anagram
// Date : 2024-01-05

/*
Given two strings s and t, return true if t is an 
anagram
 of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
*/

#include <string>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size()) return false;

        int countArray[26] = {0};

        for (char c : s)
        {
            ++countArray[c - 'a'];
        }

        for (char c : t)
        {
            --countArray[c - 'a'];
        }

        for (int count : countArray)
        {
            if (count != 0) return false;
        }

        return true;
    }
};