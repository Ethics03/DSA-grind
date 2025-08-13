#include <bits/stdc++.h>
using namespace std;




 int largestRectangleArea(vector<int>& heights) {

        //neetcode - stack hard -> used monotonic stack to keep updating 
        // the heights and the area by each increment 
        //the leftover values in the stack after first loop 
        //are the ones extending to the end
        //then finding area for them and checking max again
        // then finally getting the Maximum area
        

    //IMPORANT NOTE : IF A HEIGHT COVERS BACKWARDS TOO FOR THAT -> IF index before has bigger height
    // THE CURRENT HEIGHT IS PUSHED WITH INDEX OF PREVIOUS INDEX WHICH WAS LARGER SO AS TO CONSIDER THAT
    // THE CURRENT INDEX CAN ALSO OCCUPY THE ONE BEFORE IT WHICH WAS LARGER 
    //
    //
        stack<pair<int,int>> stk;
        int maxarea = 0;

        for(int i = 0 ; i < heights.size() ; i++){
            int l = i;
            while(!stk.empty() && stk.top().second > heights[i]){
                pair<int,int> top = stk.top();
                int idx = top.first;
                int height = top.second;
                maxarea = max(maxarea, height*(i-idx));
                l = idx;
                stk.pop();
            }
            stk.push({l,heights[i]});
        }
        while(!stk.empty()){
            int idx =  stk.top().first;
            int height = stk.top().second;
            maxarea = max(maxarea, height*(static_cast<int>(heights.size())-idx));

            stk.pop();
        }
    
        return maxarea;
    }

int main() {
  vector<int> heights = {7,1,7,2,2,4};

  int ans = largestRectangleArea(heights);
  
    cout << ans << endl;


    
    return 0;
}


    
