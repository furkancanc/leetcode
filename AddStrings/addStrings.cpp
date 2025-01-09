// Source : https://leetcode.com/problems/add-strings
// Date : 2024-01-09

/*
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string addStrings(string num1, string num2) 
    {
        int num1_lastIndex = num1.size() - 1;
        int num2_lastIndex = num2.size() - 1;
        int carry = 0;

        string answer = "";

        while (num1_lastIndex >= 0 && num2_lastIndex >= 0)
        {
            int num1_digit = num1[num1_lastIndex] - '0';
            int num2_digit = num2[num2_lastIndex] - '0';

            int digit = num1_digit + num2_digit + carry;
            answer.push_back((digit % 10) + '0');
            carry = digit / 10;

            --num1_lastIndex;
            --num2_lastIndex;
        }

        while (num1_lastIndex >= 0)
        {
            int digit = (num1[num1_lastIndex] - '0') + carry;
            answer.push_back((digit % 10) + '0');
            carry = digit / 10;
            --num1_lastIndex;
        }

        while (num2_lastIndex >= 0)
        {
            int digit = (num2[num2_lastIndex] - '0') + carry;
            answer.push_back((digit % 10) + '0');
            carry = digit / 10;
            --num2_lastIndex;
        }

        if (carry) 
        {
            answer.push_back(carry + '0');
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};