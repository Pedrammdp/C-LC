#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len = mat.size();
        int sum = 0;
        for (size_t i = 0; i < len; i++){
            for(size_t j = 0; j < len; j++){
                if((i==j) || ((i+j) == len - 1)){
                    sum += mat[i][j];
                }

            }
        }
        // if(len % 2 != 0){
        //     sum = sum - mat[len/2][len/2];
        // }
        return len;

        
    }
};

int main(){
    Solution S;
    
    vector<vector<int>> mat = { {1,2,3}, {4,5,6}, {7,8,9}};
    cout << S.diagonalSum(mat);
}