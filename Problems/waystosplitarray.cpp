#include <bits/stdc++.h>

using namespace std;

int waysToSplitArray(vector<int> nums) {
        int i = 0;
        long long int n = 0;
        int ans = 0;
        long long int leftsum = 0;
        for(int f = 0 ; f < nums.size() ; f++){
            n += nums[f];
        }

        while(i < nums.size()-1){
            int j = 0;  
            int k = i+1;
            leftsum += nums[i];
           if(leftsum >= n-leftsum){
            ans++;
           }
            i++;
        }
        return ans;
    }

using namespace std;

int main() {
    
  vector<int> vals = {10,4,-8,7};
  int ans = waysToSplitArray(vals);
  cout << ans << endl;
    return 0;
}
    
