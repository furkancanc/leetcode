// Source : https://leetcode.com/problems/add-binary
// Date : 2024-01-06

/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string addBinary(string a, string b) 
    {
        int length_a = a.length() - 1;
        int length_b = b.length() - 1;
        int carry = 0;

        string binaryNumber;

        while (length_a >= 0 || length_b >= 0 || carry)
        {
            if (length_a >= 0)
            {
                carry += a[length_a--] - '0';
            }
            if (length_b >= 0)
            {
                carry += b[length_b--] - '0';
            }

            binaryNumber += carry % 2 + '0';
            carry /= 2;
        }

        reverse(binaryNumber.begin(), binaryNumber.end());
        return binaryNumber;
    }
};