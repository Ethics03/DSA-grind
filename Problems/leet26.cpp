#include<bits/stdc++.h>


using namespace std;

//remove duplicates from sorted array (TWO POINTER APPROACH)
int removeDuplicates(vector<int>& nums) {
     
     int len = nums.size();
     int i = 1; //using i variable to store the non-repeating index
     int k = 1; 
     vector<int> expectednums; 
     for(int j = 1; j < len; j++){
        if(nums[j] != nums[i-1]){ // when not equal store it in i
            nums[i] = nums[j]; // then update the index at nums[i] to that number
            i++;  // so now we have uequal elements from nums[0...i-1]
            k++;
        }
     }
      
  return k;
    }


int main(){
      


		return 0;
}
