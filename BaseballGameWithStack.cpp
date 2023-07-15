#include <ctype.h>
#include<iostream>
#include<vector>
#include <string>
#include<numeric>
#include <stack>

using namespace std;

class BaseballGame {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;
        for(int i  = 0; i < operations.size(); i++)
        {
            if (st.empty()){
                st.push(stoi(operations[i]));
            }
            else if (operations[i] == "C"){
                st.pop();
            }
            else if (operations[i] == "D")
            {
                st.push(2*st.top());
            }
            else if (operations[i] == "+")
            {
                int temp = st.top();
                st.pop();
                
                int s = temp + st.top();
            
                st.push(temp);
                st.push(s);
            }
            else{
                st.push(stoi(operations[i]));
            }
            
        }
        vector<int> v;
        int sum = 0;

        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for (auto ele : v)
        {
            sum += ele;
        }
        return sum;

    }
    
    
};

int main(){
    BaseballGame B;
    vector<string> vec = {"5","2","C","D","+"};

    cout << B.calPoints(vec);

}