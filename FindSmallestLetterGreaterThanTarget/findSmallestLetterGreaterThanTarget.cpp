// Source : https://leetcode.com/problems/find-smallest-letter-greater-than-target
// Date : 2024-01-14

/*
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

 

Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.
Example 3:

Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
 
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int startIdx = 0, endIdx = letters.size() - 1, midIdx = 0;

        while (startIdx <= endIdx)
        {
            midIdx = startIdx + (endIdx - startIdx) / 2;
            if (letters[midIdx] <= target)
            {
                startIdx = midIdx + 1;
            }
            else if (letters[midIdx] > target)
            {
                endIdx = midIdx - 1;
            }
        }

        return letters[startIdx % letters.size()];
    }
};