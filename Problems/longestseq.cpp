#include <bits/stdc++.h>

using namespace std;

 int longestConsecutive(vector<int> nums) {
        int last;
        int ans = 0; 
        unordered_set<int> start(nums.begin(),nums.end()); //making a hashset for unique values
        for(int val: start){ 
            if(start.find(val-1) == start.end()){ // checking only from the start of each sequence
                int count= 1;
                int curr = val;
                while(start.find(curr+1) != start.end()){ // checking sequence
                    count += 1;
                    curr+=1;
                }
                ans = max(count,ans); //updating the answer if a bigger sequence comes in to get the max length
            }
        }
        return ans;
    }

int main() {

    return 0;
}
    
