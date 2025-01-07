// Source : https://leetcode.com/problems/matrix-diagonal-sum
// Date : 2024-01-07

/*
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

 

Example 1:


Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
Example 2:

Input: mat = [[1,1,1,1],
              [1,1,1,1],
              [1,1,1,1],
              [1,1,1,1]]
Output: 8
Example 3:

Input: mat = [[5]]
Output: 5
*/

#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int size = mat.size();
        int sum = 0;

        for (size_t i = 0; i < size; ++i)
        {
            sum += mat[i][i];
            if (i != size - i - 1)
            {
                sum += mat[i][size - i - 1];
            }
        }

        return sum;
    }
};