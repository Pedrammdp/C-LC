#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int len = accounts.size();
        vector<int> rowSums;

        for(auto row : accounts){
            int sum = 0;
            for(auto num : row){
                sum += num;
            }

            rowSums.push_back(sum);
        }
        for (int r : rowSums){
            if(r > max)
                max = r;
        }
        
        return max;
    }
};
int main(){
    Solution S;

    vector<vector<int>> vec1 = {{1,2,3},{3,2,1}};

    vector<vector<int>> vec2 {{1,5},{7,3},{3,5}};

    cout << S.maximumWealth(vec1) << endl;
    cout << S.maximumWealth(vec2);
}