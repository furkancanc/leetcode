// Source : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three
// Date : 2024-01-12

/*
You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

Return the minimum number of operations to make all elements of nums divisible by 3.

 

Example 1:

Input: nums = [1,2,3,4]

Output: 3

Explanation:

All array elements can be made divisible by 3 using 3 operations:

Subtract 1 from 1.
Add 1 to 2.
Subtract 1 from 4.
Example 2:

Input: nums = [3,6,9]

Output: 0
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    int minimumOperations(vector<int>& nums) 
    {
        int numOfOperations = 0;
        for (int num : nums)
        {
            if (num % 3 == 0) continue;
            ++numOfOperations;
        }   

        return numOfOperations;
    }
};