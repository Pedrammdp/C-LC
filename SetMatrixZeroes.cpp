#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        unordered_set<int> rows_with_zero;
        unordered_set<int> cols_with_zero;

        for(int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                if (matrix[i][j] == 0){
                    rows_with_zero.insert(i);
                    cols_with_zero.insert(j);
                }
            }
        }

        for (int r : rows_with_zero){
            for (int j = 0; j < cols; j++){
                matrix[r][j] = 0;
            }
        }

        for (int c : cols_with_zero){
            for (int i = 0; i < rows; i++){
                matrix[i][c] = 0;
            }
        }
        
    }
};


int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    Solution solution;
    solution.setZeroes(matrix);

    // Output the modified matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}