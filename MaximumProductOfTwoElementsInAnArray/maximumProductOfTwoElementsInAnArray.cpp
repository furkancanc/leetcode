// Source : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Date : 2024-02-09

/*
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 

Example 1:

Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
Example 2:

Input: nums = [1,5,4,5]
Output: 16
Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.
Example 3:

Input: nums = [3,7]
Output: 12
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxNum_1 = INT_MIN;
        int maxNum_2 = INT_MIN;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > maxNum_1)
            {
                maxNum_2 = maxNum_1;
                maxNum_1 = nums[i];
            }
            else if (nums[i] > maxNum_2)
            {
                maxNum_2 = nums[i];
            }
        }

        int product = (maxNum_1 - 1) * (maxNum_2 - 1);
        return product;
    }
};