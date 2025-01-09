#include <bits/stdc++.h>

using namespace std;


void sortColors(vector<int> nums) {
        int c0=0,c1=0,c2=0;
        int j=0,k=0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                c0++;
            }
            else if(nums[i] == 1){
                c1++;
            }
            else if(nums[i] == 2){
                c2++;
            }
        }
        for(int i = 0 ; i < c0 ; i++){
            nums[i] = 0;
            j++;
        }
        for(int i = j ; i < j+c1 ; i++){
            nums[i] = 1;
        }
        k = j+c1;
        for(int i = k ; i < k+c2 ; i++){
            nums[i] = 2;
        }
    }

int main() {
  vector<int> numsans = {2,0,1};
  sortColors(numsans);
  
    return 0;
}
    
