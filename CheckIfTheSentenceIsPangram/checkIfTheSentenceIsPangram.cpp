// Source : https://leetcode.com/problems/check-if-the-sentence-is-pangram
// Date : 2024-03-16

/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
*/

#include <string>
#include <unordered_set>
using namespace std;

class Solution 
{
    public:
        bool checkIfPangram(string sentence) 
        {
            return unordered_set<char>{sentence.begin(), sentence.end()}.size() == 26;
        }
};