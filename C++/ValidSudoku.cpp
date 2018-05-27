/**
 * Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
 *
 *   1. Each row must contain the digits 1-9 without repetition.
 *   2. Each column must contain the digits 1-9 without repetition.
 *   3. Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.
 * 
 * The Sudoku board could be partially filled, where empty cells are filled with the character '.'
 */
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, int> valid_check;
        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {
                char cell = board[row][col];
                // Only check non-empty cells
                if(cell != '.') {
                    // Check row, col, and square for existing number
                    if(!valid_check.insert({cell + string(" r ") + to_string(row), 1}).second || 
                       !valid_check.insert({cell + string(" c ") + to_string(col), 1}).second || 
                       !valid_check.insert({cell + string(" s ") + to_string(row/3) + "-" + to_string(col/3), 1}).second) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};