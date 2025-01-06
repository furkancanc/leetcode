// Source : https://leetcode.com/problems/monotonic-array
// Date : 2024-01-06

/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

 

Example 1:

Input: nums = [1,2,2,3]
Output: true
Example 2:

Input: nums = [6,5,4,4]
Output: true
Example 3:

Input: nums = [1,3,2]
Output: false
 
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    bool isMonotonic(vector<int>& nums) 
    {
        size_t size = nums.size();
        if (size == 1) return true;

        bool isIncreasing = true;
        bool isDecreasing = true;

        for (int i = 0; i < size - 1; ++i)
        {
            if (nums[i] > nums[i + 1])
            {
                isIncreasing = false;
            }

            if (nums[i] < nums[i + 1])
            {
                isDecreasing = false;
            }
        }

        return isIncreasing || isDecreasing;
    }
};