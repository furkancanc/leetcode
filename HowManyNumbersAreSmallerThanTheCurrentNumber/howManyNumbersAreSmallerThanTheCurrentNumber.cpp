// Source : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number
// Date : 2024-01-12

/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.

 

Example 1:

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
Example 2:

Input: nums = [6,5,4,8]
Output: [2,1,0,3]
Example 3:

Input: nums = [7,7,7,7]
Output: [0,0,0,0]
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        constexpr int maxNumber = 100;
        vector<int> smallerNumbers;
        vector<int> countNumbers(maxNumber + 1);

        for (const int num : nums)
        {
            ++countNumbers[num];
        }

        for (int i = 1; i <= maxNumber; ++i)
        {
            countNumbers[i] += countNumbers[i - 1];
        }

        for (const int num : nums)
        {
            smallerNumbers.push_back(num == 0 ? 0 : countNumbers[num - 1]);
        }
        
        return smallerNumbers;

    }
};