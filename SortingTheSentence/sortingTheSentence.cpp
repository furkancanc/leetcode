// Source : https://leetcode.com/problems/sorting-the-sentence
// Date : 2024-03-18

/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

 

Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
Example 2:

Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
*/

#include <string>
#include <vector>
using namespace std;

class Solution 
{
    public:
        string sortSentence(string s) 
        {
            vector<string> num(9);
            int idx = 0; 
            
            for(int i = 1; i < s.size(); i++)
            {
                if(isdigit(s[i]))
                {
                    num[s[i] - '0' - 1] = s.substr(idx, i - idx);
                    
                    ++i;
                    
                    idx = i + 1;
                }
            }
            
            string answer = "";
            for(string str : num)
            {
                if(str.size())
                answer += str + " ";
            }

            answer.pop_back();
            return answer;
        }
};