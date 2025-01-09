// Source : https://leetcode.com/problems/convert-date-to-binary
// Date : 2024-01-09

/*
You are given a string date representing a Gregorian calendar date in the yyyy-mm-dd format.

date can be written in its binary representation obtained by converting year, month, and day to their binary representations without any leading zeroes and writing them down in year-month-day format.

Return the binary representation of date.

 

Example 1:

Input: date = "2080-02-29"

Output: "100000100000-10-11101"

Explanation:

100000100000, 10, and 11101 are the binary representations of 2080, 02, and 29 respectively.

Example 2:

Input: date = "1900-01-01"

Output: "11101101100-1-1"

Explanation:

11101101100, 1, and 1 are the binary representations of 1900, 1, and 1 respectively.
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string convertDateToBinary(string date) 
    {
        string year = date.substr(0, 4);
        string month = date.substr(5, 2);
        string day = date.substr(8, 2);

        int y = stoi(year);
        int m = stoi(month);
        int d = stoi(day);

        string yearBinary = convertBinary(y); 
        string monthBinary = convertBinary(m); 
        string dateBinary = convertBinary(d);  

        return yearBinary + "-" + monthBinary + "-" + dateBinary;
    }

    string convertBinary(int num)
    {
        if (num == 1)
        {
            return to_string(1);
        }

        string binaryNumber = "";
        while (num)
        {
            binaryNumber = to_string(num % 2) + binaryNumber;
            num /= 2;
        }

        return binaryNumber;
    }
};