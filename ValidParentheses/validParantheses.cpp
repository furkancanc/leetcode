// Source : https://leetcode.com/problems/valid-parentheses/
// Date : 2024-01-04

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true
*/

#include <string>
#include <stack>
using namespace std;

class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> charStack;

        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                charStack.push(c);
            }
            else
            {
                if (charStack.empty()) return false;

                char item = charStack.top();
                if ((c == ')' && item != '(') || (c == ']' && item != '[') || (c == '}' && item != '{'))
                {
                    return false;
                }

                charStack.pop();
            }
            
        }

        return charStack.empty();
    }
};