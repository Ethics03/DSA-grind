#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int> nums1, vector<int> nums2) {
        unordered_set<int> set(nums1.begin(),nums1.end());
        unordered_set<int> ans;
        
        for(int i : nums2){
            if(set.count(i)){
                ans.insert(i);            
                }
        }
        vector<int> vecans = vector<int>(ans.begin(),ans.end());
        return vecans;
    }

int main() {
  
    return 0;
}
    
