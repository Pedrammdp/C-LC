#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> SpiralMatrix;
        int rows = matrix.size();
        if (rows == 0) return SpiralMatrix; // Handle empty matrix
        int cols = matrix[0].size();
        
        int topRow = 0, bottomRow = rows - 1;
        int leftCol = 0, rightCol = cols - 1;
        
        while (topRow <= bottomRow && leftCol <= rightCol) {
            // Traverse top row
            for (int i = leftCol; i <= rightCol; i++) {
                SpiralMatrix.push_back(matrix[topRow][i]);
            }
            topRow++;

            // Traverse right column
            for (int i = topRow; i <= bottomRow; i++) {
                SpiralMatrix.push_back(matrix[i][rightCol]);
            }
            rightCol--;

            // Traverse bottom row
            if (topRow <= bottomRow) { // Check to avoid redundant traversal
                for (int i = rightCol; i >= leftCol; i--) {
                    SpiralMatrix.push_back(matrix[bottomRow][i]);
                }
                bottomRow--;
            }

            // Traverse left column
            if (leftCol <= rightCol) { // Check to avoid redundant traversal
                for (int i = bottomRow; i >= topRow; i--) {
                    SpiralMatrix.push_back(matrix[i][leftCol]);
                }
                leftCol++;
            }
        }
        
        return SpiralMatrix;
    }
};
