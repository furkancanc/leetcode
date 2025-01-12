// Source : https://leetcode.com/problems/left-and-right-sum-differences
// Date : 2024-01-12

/*
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        size_t size = nums.size();
        int leftSum = 0, rightSum = 0;
        vector<int> differences(size);
        
        for (size_t i = 1; i < size; ++i)
        {
            rightSum += nums[i];
        }

        differences[0] = abs(rightSum);

        for (size_t i = 1; i < size; ++i)
        {
            leftSum += nums[i - 1];
            rightSum -= nums[i];

            differences[i] = abs(rightSum - leftSum);
        }

        return differences;
    }
};