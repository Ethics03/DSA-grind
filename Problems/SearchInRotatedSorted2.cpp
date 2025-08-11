#include<bits/stdc++.h>

using namespace std;

// MOSTLY GOT IT RIGHT BUT HAD ALOT OF CONDITION CHECKING WHICH WAS USELESS AND COULD BE OPTIMIZED

// BASICALLY IF left ptr and right ptr are equal to mid only then we increment left and decrement right for removing same values

// THEN WITHOUT SPLITTING INTO SORTED ARRAYS - WE CAN DO IT WITHOUT IT. JUST HAVE TO CHECK IF MID IS SMALLER OR LARGER THAN ONE OF THE END POINTS


// DEPENDING ON THAT AND IF TARGET IS BETWEEN THE (MID) AND THE ENDPOINT range. 

bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[l] == nums[mid] && nums[mid] == nums[r]){
                l++;
                r--;
                continue;
            }
           
           if(nums[l] <= nums[mid]){
                if(nums[l] <= target && target < nums[mid]){
                    r = mid-1;
                } 
                else {
                    l = mid + 1;
                }
           }
           else {
            if(target > nums[mid] && nums[r] >= target){
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
           }
           
        }
                return false;
    }

int main(){

  vector<int> vals = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
        int target = 1;
        bool ans = search(vals,target);

        cout << ans << endl;
        return 0;

    
}
