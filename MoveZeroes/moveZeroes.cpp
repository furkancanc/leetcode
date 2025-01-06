// Source : https://leetcode.com/problems/move-zeroes
// Date : 2024-01-06

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        int left = 0;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[left++]);
            }
        }
    }
};