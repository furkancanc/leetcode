// Source : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping
// Date : 2024-01-22

/*
You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:

Characters ('a' to 'i') are represented by ('1' to '9') respectively.
Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
Return the string formed after mapping.

The test cases are generated so that a unique mapping will always exist.

 

Example 1:

Input: s = "10#11#12"
Output: "jkab"
Explanation: "j" -> "10#" , "k" -> "11#" , "a" -> "1" , "b" -> "2".
Example 2:

Input: s = "1326#"
Output: "acz"
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string freqAlphabets(string s) 
    {
        string answer = "";

        for (size_t i = 0; i < s.length(); ++i)
        {
            if (i + 2 < s.length() && s[i + 2] == '#')
            {
                int num = (s[i] - '0') * 10 + (s[i+1] - '0');
                answer += char(num + 'a' - 1);
                i += 2;
            }
            else
            {
                answer += char(s[i] -'0' + 'a' - 1);
            }
        }

        return answer;
    }
};