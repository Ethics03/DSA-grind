#include <bits/stdc++.h>

using namespace std;

int threeSumClosest(vector<int> nums, int target) {
       sort(nums.begin(),nums.end());
       int n = nums.size();

       int sum = nums[0] + nums[1] + nums[2];

       for(int i = 0 ; i < n-2 ; i++){
        int j = i+1;
        int k = n-1;
        while(j < k){
            int val = nums[i]+nums[j]+nums[k];
            if(abs(val-target) < abs(sum-target)){
                sum = val; // updating the sum
            }
            if(val > target){
                k--;
            }
            else if(val < target){
                j++;
            }
            else{
                return target;
            }
        }
       }
       
            return sum;
    }


int main() {
  vector<int> n = {1,-1,2,3,4};
  int tar = 1;
  int ans = threeSumClosest(n,tar);

  cout << ans << endl;
    return 0;
}
    
