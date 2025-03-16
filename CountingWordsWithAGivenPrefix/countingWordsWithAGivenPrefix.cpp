// Source : https://leetcode.com/problems/counting-words-with-a-given-prefix
// Date : 2024-03-16

/*
You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.

 

Example 1:

Input: words = ["pay","attention","practice","attend"], pref = "at"
Output: 2
Explanation: The 2 strings that contain "at" as a prefix are: "attention" and "attend".
Example 2:

Input: words = ["leetcode","win","loops","success"], pref = "code"
Output: 0
Explanation: There are no strings that contain "code" as a prefix.
*/

#include <vector>
#include <string>
using namespace std;

class Solution 
{
    public:
        int prefixCount(vector<string>& words, string pref) 
        {
            int counter = 0;
            int size = pref.length();
            for (auto const& word : words)
            {
                if (word.size() >= size && word.compare(0, size, pref) == 0)
                {
                    ++counter;
                }
            }

            return counter;
        }
};