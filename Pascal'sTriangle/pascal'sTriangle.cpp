// Source : https://leetcode.com/problems/pascals-triangle/
// Date : 2024-01-22

/*
iven an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pascalTriangle;
        pascalTriangle.push_back({1});

        for (int i = 1; i < numRows; ++i)
        {
            vector<int> tempVec(i + 1);
            tempVec[0] = pascalTriangle[i-1][0];
            for (int j = 1; j < i; ++j)
            {
                tempVec[j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
            }

            tempVec[i] = pascalTriangle[i - 1][0];
            pascalTriangle.push_back(tempVec);
        }

        return pascalTriangle;
    }
};