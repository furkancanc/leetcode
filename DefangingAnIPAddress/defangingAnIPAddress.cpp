// Source : https://leetcode.com/problems/defanging-an-ip-address
// Date : 2024-01-08

/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
*/

#include <string>
using namespace std;

class Solution 
{
public:
    string defangIPaddr(string address) 
    {
        string IPAdress;

        for (char c : address)
        {
            if (c == '.') IPAdress += "[.]";
            else IPAdress += c;
        }

        return IPAdress;
    }
};