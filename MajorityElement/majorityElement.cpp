// Source : https://leetcode.com/problems/majority-element
// Date : 2024-01-11

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> majorityMap;

        int majorityCount = nums.size() / 2;
        for (int num : nums)
        {
            ++majorityMap[num];
            if (++majorityMap[num] > majorityCount)
            {
                return num;
            }
        }
        return -1;
    }
};