/**
 * You are given an n x n 2D matrix representing an image.
 * Rotate the image by 90 degrees (clockwise).
 *
 * Note:
 * You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
 * DO NOT allocate another 2D matrix and do the rotation.
 */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int length = matrix.size();
        int temp = 0;
        // Loop through outside square of matrix
        for(int i = 0; i < length / 2; i++) {
            // Switch every number in square border
            for(int j = i; j < length - i - 1; j++) {
                temp = matrix[i][j]; // save top left
                matrix[i][j] = matrix[length - j - 1][i]; // set top left
                matrix[length - j - 1][i] = matrix[length - i - 1][length - j - 1]; // set bottom left
                matrix[length - i - 1][length - j - 1] = matrix[j][length - i - 1]; // set bottom right
                matrix[j][length - i - 1] = temp; // set top right
            }
        }
    }
};