// Source : https://leetcode.com/problems/product-of-array-except-self
// Date : 2024-01-05

/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        size_t size = nums.size();

        vector<int> leftMult(size, 1);
        vector<int> rightMult(size, 1);

        for (size_t i = 1; i < size; ++i)
        {
            leftMult[i] = leftMult[i - 1] * nums[i - 1];
        }

        for (int i = size - 2; i >= 0; --i)
        {
            rightMult[i] = rightMult[i + 1] * nums[i + 1];
        }

        vector<int> products(size, 1);

        for (size_t i = 0; i < size; ++i)
        {
            products[i] = leftMult[i] * rightMult[i];
        }   

        return products;
    }
};