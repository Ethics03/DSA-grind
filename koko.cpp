#include <bits/stdc++.h>

using namespace std;


int minEatingSpeed(vector<int>& piles, int h) {

  // basically getting the max of the piles
  // checking from 1 to max(piles) all possible values of k for which solution is possible
  // get the minimum value for which the solution is possible 
  // checking for each value the ceil(pile/mid) to get time to finish each pile 
  // using binary search for better time complexity
  
         int l = 1 , r = *max_element(piles.begin(),piles.end());
         int ans = r;

         while (l <= r){
            int mid = floor((l+r)/2);
            double hour = 0;
            for(auto& pile: piles){
                   hour += ceil((double)pile/mid);     
            }
            if(hour <= h){
                ans = min(ans,mid);
                r = mid - 1;
            }
            else{ 
                l = mid + 1;
            }
         }
         return ans;
    }


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
    
