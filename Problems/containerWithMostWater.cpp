#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> height) {
          
        int i = 0; 
        int j = height.size()-1;
        
        int maxar = 0;
        
        while(i <  j){
               int minw = min(height[i], height[j]);
               int curr = minw*(j-i);
               maxar = max(curr,maxar);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
            return maxar;
    }

int main() {

  vector<int> heights = {1,3,4,6,7,5,6};

  int ans = maxArea(heights);

  cout << ans;
  return 0;
}
    
