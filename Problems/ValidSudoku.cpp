#include <bits/stdc++.h>

using namespace std;

 bool isValidSudoku(vector<vector<char>>& board) {

            //for rows
            for(int i = 0; i < 9; i++){
                unordered_set<char> nums;
                for(int j = 0 ; j < 9 ; j++){
                    if(board[i][j] == '.') continue;
                    if(nums.count(board[i][j])) return false;
                    nums.insert(board[i][j]);
                }
            } 
            //for columns
            for(int c = 0 ; c < 9 ; c++){
                unordered_set<char> nu;
                for(int d = 0 ; d < 9 ; d++){
                    if(board[d][c] == '.') continue;
                    if(nu.count(board[d][c])) return false;
                    nu.insert(board[d][c]);
                }
            }   
            //for 3x3 squares
        for(int s=0 ; s < 9 ; s++){
            unordered_set<char> vals;
            for(int r = 0 ; r < 3 ; r++){
                for(int c=0 ; c < 3 ; c++){
                    int rval = (s/3)*3 + r;
                    int cval = (s%3)*3 + c;
                    if(board[rval][cval] == '.') continue;
                    if(vals.count(board[rval][cval])) return false;
                    vals.insert(board[rval][cval]);
                }
            }
        }
        return true;
    }

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
    
