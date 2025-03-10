// Source : https://leetcode.com/problems/sort-array-by-parity/
// Date : 2024-02-09

/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
 
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int idx = 0;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] % 2 == 0)
            {
                swap(nums[idx], nums[i]);
                ++idx;
            }
        }
        
        return nums;
    }

};