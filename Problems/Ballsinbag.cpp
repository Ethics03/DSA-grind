#include <bits/stdc++.h>

using namespace std;

int minimumSize(vector<int> nums, int maxOperations) {
        int lf = 1;
        int rt = *max_element(nums.begin(),nums.end());
        int val = rt;

        while(lf < rt){
            int mid = (lf+rt)/2;
            int ops = 0;
            for(int n : nums){
                ops+= (n-1)/mid;
                
                if(ops > maxOperations) break;
            }
            if(ops <= maxOperations){
                val = mid;
                rt = mid -1;
            }
            else{
                lf = mid + 1;
            }
        }
        return val;
    }



int main() {

  vector<int> nums = {9};
  int max = 2;

  cout << minimumSize(nums,max);



    return 0;
}
    
