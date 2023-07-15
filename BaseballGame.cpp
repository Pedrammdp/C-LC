#include <ctype.h>
#include<iostream>
#include<vector>
#include <string>
#include<numeric>

using namespace std;

class BaseballGame {
public:
    int calPoints(vector<string>& operations) {
        int n  = operations.size();
        vector<int> ResVec;
        int i = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i]!="D" && operations[i]!="C" && operations[i]!="+"){
                ResVec.emplace_back(stoi(operations[i]));
            } else if (operations[i] == "+") {
                ResVec.push_back(ResVec[ResVec.size() - 1] + ResVec[ResVec.size() - 2]);
            } else if (operations[i] == "D") {
                ResVec.push_back(2 * ResVec[ResVec.size() - 1]);
            } else if (operations[i] == "C") {
                ResVec.pop_back();
            }
        }
        long long ans=accumulate(ResVec.begin(),ResVec.end(),0);
        return ans;
    }
    
    
};

int main(){
    BaseballGame B;
    vector<string> vec = {"5","2","C","D","+"};

    cout << B.calPoints(vec);

}