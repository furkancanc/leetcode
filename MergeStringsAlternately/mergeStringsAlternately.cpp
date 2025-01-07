// Source : https://leetcode.com/problems/merge-strings-alternately
// Date : 2024-01-07

/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        int length1 = word1.size();
        int length2 = word2.size();
        int idx = 0;

        string mergedString = "";

        while (idx < length1 && idx < length2)
        {
            mergedString += word1[idx];
            mergedString += word2[idx];
            ++idx;
        }

        while (idx < length1)
        {
            mergedString += word1[idx];
            ++idx;
        }

        while (idx < length2)
        {
            mergedString += word2[idx];
            ++idx;
        }

        return mergedString;
    }
};