#include <vector>


namespace algorithms::graph::leetcode::push_box
{

using grid = std::vector<std::vector<char>>;

    /**
     * https://leetcode.com/problems/minimum-moves-to-move-a-box-to-their-target-location
     * A storekeeper is a game in which the player pushes boxes around in a warehouse trying to get them to target locations.
     * The game is represented by an m x n grid of characters grid where each element is a wall, floor, or box.
     * Your task is to move the box 'B' to the target position 'T' under the following rules:
     * The character 'S' represents the player. The player can move up, down, left, right in grid if it is a floor (empty cell).
     * The character '.' represents the floor which means a free cell to walk.
     * The character '#' represents the wall which means an obstacle (impossible to walk there).
     * There is only one box 'B' and one target cell 'T' in the grid.
     * The box can be moved to an adjacent free cell by standing next to the box and then moving in the direction of the box. 
     * This is a push. The player cannot walk through the box.
     * Return the minimum number of pushes to move the box to the target. If there is no way to reach the target, return -1. 
     * hints: We represent the search state as (player_row, player_col, box_row, box_col).
     * You need to count only the number of pushes. Then inside of your BFS check if the box could be pushed (in any direction) 
     * given the current position of the player */
    int minPushBox(const grid& g) 
    {
        return 0;
    }
}