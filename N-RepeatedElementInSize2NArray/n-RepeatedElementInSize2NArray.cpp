// Source : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// Date : 2024-01-26

/*
You are given an integer array nums with the following properties:

nums.length == 2 * n.
nums contains n + 1 unique elements.
Exactly one element of nums is repeated n times.
Return the element that is repeated n times.

 

Example 1:

Input: nums = [1,2,3,3]
Output: 3
Example 2:

Input: nums = [2,1,2,5,3,2]
Output: 2
Example 3:

Input: nums = [5,1,5,2,5,3,5,4]
Output: 5
 
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        int n = nums.size() / 2;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            int count = std::count(nums.begin(), nums.end(), nums[i]);
            if (count == n)
            {
                return nums[i];
            }
        }

        return INT_MIN;
    }
};