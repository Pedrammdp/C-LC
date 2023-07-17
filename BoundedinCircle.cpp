#include <iostream>
#include<vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0;
        int y = 0;
        int nx = x;
        int ny = y;
        char CurrentDirection = 'N';
        for (int i = 0; i < 4; i++){
            for (auto c : instructions)
            {
            switch (CurrentDirection) {
                case 'N':
                    if (c == 'R')
                        CurrentDirection = 'E';
                    else if (c == 'L')
                        CurrentDirection = 'W';
                    break;
                case 'E':
                    if (c == 'R')
                        CurrentDirection = 'S';
                    else if (c == 'L')
                        CurrentDirection = 'N';
                    break;
                case 'S':
                    if (c == 'R')
                        CurrentDirection = 'W';
                    else if (c == 'L')
                        CurrentDirection = 'E';
                    break;
                case 'W':
                    if (c == 'R')
                        CurrentDirection = 'N';
                    else if (c == 'L')
                        CurrentDirection = 'S';
                    break;
                }
                if (c == 'G') {
                    switch (CurrentDirection) {
                    case 'N':
                        ++ny;
                        break;
                    case 'E':
                        ++nx;
                        break;
                    case 'S':
                        --ny;
                        break;
                    case 'W':
                        --nx;
                        break;
                    }
                }
            }
            
            
            if ( (nx == x && ny  == y) ){
                return true;
            }
        }
        return false;
    }
};


int main(){
    Solution S;
    
    string ins = "GLRLLGLL";
    cout << S.isRobotBounded(ins);

}
    


