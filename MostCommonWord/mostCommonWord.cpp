// Source : https://leetcode.com/problems/most-common-word
// Date : 2024-01-19

/*
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.

 

Example 1:

Input: paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.", banned = ["hit"]
Output: "ball"
Explanation: 
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"), 
and that "hit" isn't the answer even though it occurs more because it is banned.
Example 2:

Input: paragraph = "a.", banned = []
Output: "a"
 
*/

#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution 
{
    public:

        string mostCommonWord(string paragraph, vector<string>& banned) 
        {

            size_t paragraphSize = paragraph.size();
            size_t bannedSize = banned.size();

            string word = "";
            string answer = "";


            unordered_map<string,int> validWordFrequency;
        

            for(size_t i = 0; i < paragraphSize; ++i)
            {
                if ((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z')) 
                {
                    word.push_back(tolower(paragraph[i]));
                } 
                else if (!word.empty()) 
                {
                    ++validWordFrequency[word];
                    word = "";
                }
            }

            if (!word.empty()) 
            {
                ++validWordFrequency[word];
            }

            for(size_t i = 0; i < bannedSize; ++i)
            {
                validWordFrequency[banned[i]] = 0;
            }

            int maximumFrequency = INT_MIN;

            for(auto const& validWordPair : validWordFrequency)
            {
                if (validWordPair.second > maximumFrequency)
                {
                    maximumFrequency = validWordPair.second;
                    answer = validWordPair.first;
                }
            }

            return answer;
        }
        
    };