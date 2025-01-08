// Source : https://leetcode.com/problems/reverse-string
// Date : 2024-01-08

/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    void reverseString(vector<char>& s) 
    {
        int firstIndex = 0;
        int lastIndex = s.size() - 1;

        while (firstIndex < lastIndex)
        {
            swap(s[firstIndex], s[lastIndex]);
            ++firstIndex;
            --lastIndex;
        }
    }
};