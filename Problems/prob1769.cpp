#include <bits/stdc++.h>

using namespace std;

vector<int> minOperations(string boxes) {
        
        int n = boxes.length();
        vector<int> ans(n,0);
        vector<int> ones;
        for(int p = 0;p < boxes.length(); p++){
            if(boxes[p] == '1'){
                ones.push_back(p);
                ans[0] += p; //steps for the first box
            }
        }
        int s = ones.size(),left=0,right=s;//from left and right both
        for(int i = 1,j=0 ; i < n;i++){
            if(j < s && i > ones[j]){
                left++; 
                right--;
                j++;
            }
            ans[i] = ans[i-1]+(left-right); //final ans adding
        }
        return ans;
    }


int main() {

string boxes = "110010";
vector<int> ans =  minOperations(boxes);

for(int i = 0 ; i < ans.size() ;i++){
  cout << ans[i] << " ";
}

    return 0;
}
    
