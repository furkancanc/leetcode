// Source : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent
// Date : 2024-01-08

/*
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

 

Example 1:

Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
Example 2:

Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false
Example 3:

Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
*/

#include <vector>
#include <string>
using namespace std;

class Solution 
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string word_1, word_2;

        for (string& word : word1)
        {
            word_1 += word;
        }

        for (string& word : word2)
        {
            word_2 += word;
        }

        return word_1 == word_2;
    }
};