// Source : https://leetcode.com/problems/max-consecutive-ones
// Date : 2024-01-03

/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maximumConsecutiveOnes = 0;
        int counter = 0;

        for (int num : nums)
        {
            if (num == 1)
            {
                ++counter;
                maximumConsecutiveOnes = max(maximumConsecutiveOnes, counter);
            }
            else
            {
                counter = 0;
            }
        }

        return maximumConsecutiveOnes;
    }
};