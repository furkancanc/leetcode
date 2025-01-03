// Source : https://leetcode.com/problems/trapping-rain-water
// Date : 2024-01-03

/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    int trap(vector<int>& height) 
    {
        size_t size = height.size();

        vector<int> left(size);
        vector<int> right(size);

        left[0] = height[0];
        right[size - 1] = height[size - 1];

        for (size_t i = 1; i < size; ++i)
        {
            left[i] = max(left[i - 1], height[i]);
        } 

        for (int i = size - 2; i >= 0; --i)
        {
            right[i] = max(right[i+1], height[i]);
        }

        int answer = 0;

        for (size_t i = 0; i < size; ++i)
        {
            answer += min(left[i], right[i]) - height[i];
        }

        return answer;
    }
};