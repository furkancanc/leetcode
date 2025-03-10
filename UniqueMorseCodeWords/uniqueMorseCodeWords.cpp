// Source : https://leetcode.com/problems/unique-morse-code-words
// Date : 2024-01-14

/*
International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:

'a' maps to ".-",
'b' maps to "-...",
'c' maps to "-.-.", and so on.
For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call such a concatenation the transformation of a word.
Return the number of different transformations among all words we have.

 

Example 1:

Input: words = ["gin","zen","gig","msg"]
Output: 2
Explanation: The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."
There are 2 different transformations: "--...-." and "--...--.".
Example 2:

Input: words = ["a"]
Output: 1
*/

#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution 
{
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        char* morseCodeArray[26] = 
        {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> uniqueMorses;

        for (const string& word : words)
        {
            string transformedString = "";
            for (char c : word)
            {
                transformedString += morseCodeArray[c - 'a'];
            }

            uniqueMorses.insert(transformedString);
        }

        return uniqueMorses.size();
    }
};