#include<bits/stdc++.h>

using namespace std;


typedef vector<int> vi;


 vector<vector<int>> ans;

    //backtracking : for each i -> traverse from i to end 
    //using backtrack function add nums[i] in the vector if sum isnt target yet
    // backtrack for target-nums[i] to check if it exists if dosen't pop that case from vector
    // and again backtrack from the start but now index i + 1 as no solution for i 
    //
    void backtrack(vector<int> &nums, int target, vector<int>& curr, int i){
        if(target == 0){
            ans.push_back(curr);
            return;
        }

        if(target < 0 || i >= nums.size()){
            return;
        }
        
        curr.push_back(nums[i]);
        backtrack(nums,target-nums[i],curr,i);
        curr.pop_back();
        backtrack(nums,target,curr,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> current;
        backtrack(nums,target,current,0);
        return ans;
    }

int main(){

}
