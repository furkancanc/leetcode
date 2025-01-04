// Source : https://leetcode.com/problems/jewels-and-stones
// Date : 2024-01-04

/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0
*/

#include <string>
#include <unordered_set>
using namespace std;

class Solution 
{
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int counter = 0;
        unordered_set<char> jewelsSet;

        for (char c : jewels)
        {
            jewelsSet.emplace(c);
        }

        for (char c : stones)
        {
            if (jewelsSet.find(c) != jewelsSet.end()) ++counter;
        }

        return counter;
    }
};