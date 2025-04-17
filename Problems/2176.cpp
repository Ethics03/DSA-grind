#include <bits/stdc++.h>

using namespace std;

 int countPairs(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                
                    if(nums[j] == nums[i] && (i*j)%k== 0){
                        ans = ans + 1;
                    
                }
            }
        }
        return ans;
    }

int main() {
  
  vector<int> nums =  {3,1,2,2,2,1,3};
  int k =  2;
  int ans = countPairs(nums,k);
  cout << ans << endl;

  return 0;
}
    
