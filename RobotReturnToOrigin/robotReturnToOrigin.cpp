// Source : https://leetcode.com/problems/robot-return-to-origin
// Date : 2024-01-06

/*
There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).

Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.

Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

 

Example 1:

Input: moves = "UD"
Output: true
Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
Example 2:

Input: moves = "LL"
Output: false
Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.
*/

#include <string>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    bool judgeCircle(string moves) 
    {
        int upDown = 0;
        int leftRight = 0;

        for (char c : moves)
        {
            if (c == 'U') ++upDown;
            else if (c == 'D') --upDown;
            else if (c == 'L') ++leftRight;
            else if (c == 'R') --leftRight;
        }

        return (upDown == 0) && (leftRight == 0);
    }
};