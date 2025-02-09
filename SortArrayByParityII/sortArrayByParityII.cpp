// Source : https://leetcode.com/problems/sort-array-by-parity-ii/
// Date : 2024-02-09

/*
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.

 

Example 1:

Input: nums = [4,2,5,7]
Output: [4,5,2,7]
Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
Example 2:

Input: nums = [2,3]
Output: [2,3]
 
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        vector<int> answer(nums.size());
        size_t evenIdx = 0, oddIdx = 1;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] % 2 == 0)
            {
                answer[evenIdx] = nums[i];
                evenIdx += 2;
            }
            else
            {
                answer[oddIdx] = nums[i];
                oddIdx += 2;
            }
        }

        return answer;
    }
};