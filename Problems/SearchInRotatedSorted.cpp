#include <bits/stdc++.h>


using namespace std;



int binarySearch(vector<int> nums ,int l , int r, int target){
    while(l <= r){
      int mid = l+(r-l)/2;
      if(nums[mid] == target){ 
      return mid;
      }
      else if(nums[mid] > target){
        l = mid + 1;
      }
      else {
        r = mid - 1;
      }
    }
    return -1; 
}



/// MESSED UP ALOT 
/// MAINLY THE SEARCHING THE PIVOT PART
/// BASICALLY THE PIVOT IS SEARCHED BY GETTING THE MID 
/// IF nums[mid] > nums[r] right pointer means that the pivot is obviously on the RIGHT SIDE
/// ELSE R will be shifted to mid 
///
int search(vector<int> nums, int target) {
        int l = 0;
        int r = nums.size()-1;
       
        while( l < r){
            int mid = (l+r)/2;
            
              if(nums[mid] > nums[r]){
                l = mid+1;
            }
              else{
                r = mid;
              }       
        }

        int pivot = l;
           
       
       int a1 =  binarySearch(nums,0,pivot-1,target);
       if(a1 != -1){
         return a1;
       }
        
        else {
         return binarySearch(nums, pivot,nums.size()-1,target);
                      
        }
         
    }

    int main(){

        vector<int> vals = {3,4,5,6,1,2};
        int target = 1;
        int ans = search(vals,target);

        cout << ans << endl;
        return 0;
    }
