// Source : https://leetcode.com/problems/first-unique-character-in-a-string
// Date : 2024-01-08

/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"

Output: 0

Explanation:

The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"

Output: 2

Example 3:

Input: s = "aabb"

Output: -1
*/

#include <string>
#include <vector>
using namespace std;

class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        vector<int> charFrequency(26, 0);

        for (char c : s)
        {
            ++charFrequency[c - 'a'];
        }

        for (size_t i = 0; i < s.size(); ++i)
        {
            if (charFrequency[s[i] - 'a'] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};