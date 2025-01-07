// Source : https://leetcode.com/problems/check-if-it-is-a-straight-line
// Date : 2024-01-07

/*
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

Example 1:



Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Example 2:



Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
*/

#include <vector>
using namespace std;

class Solution 
{
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        
        vector<int>& point1 = coordinates[0];
        vector<int>& point2 = coordinates[1];

        int deltaX = point2[0] - point1[0];
        int deltaY = point2[1] - point1[1];

        for (size_t i = 2; i < coordinates.size(); ++i)
        {
            vector<int>& currentPoint = coordinates[i];

            int currentDeltaX = currentPoint[0] - point1[0];
            int currentDeltaY = currentPoint[1] - point1[1];

            if (deltaX * currentDeltaY != deltaY * currentDeltaX)
            {
                return false;
            }
        }

        return true;
    }
};