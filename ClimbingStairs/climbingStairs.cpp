// Source : https://leetcode.com/problems/climbing-stairs
// Date : 2024-01-14

/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

class Solution 
{
public:
    int climbStairs(int n) 
    {
        if (n <= 3) return n;

        int prev_1 = 3;
        int prev_2 = 2;
        int current = 0;

        for (size_t i = 3; i < n; ++i)
        {
            current = prev_1 + prev_2;
            prev_2 = prev_1;
            prev_1 = current;
        }

        return current;
    }
};
