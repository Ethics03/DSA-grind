#include <bits/stdc++.h>

using namespace std;

vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> ans(n);
        vector<int> occur;
        int k=0,j=0;
        
        for(int i = 0 ;i < n ; i++){ //storing occurrences of c
            if(s[i] == c){
                occur.push_back(i);
            }
        }
        int si = occur.size();
        for(int i = 0 ; i < n ; ++i){
            if(i>occur[j]){ //checking if the index is crossed
                k=j;
                if(j < si-1){ //checking if its not more than the times c occur
                    ++j;
                }
            }
                ans[i]=min(abs(occur[j]-i),abs(occur[k]-i)); //getting the min of distance 
                //from left and right for each index
            
        }
        return ans;
    }

int main() {
    string s = "loveleetcode";
    char c = 'e';
    vector<int> ans = shortestToChar(s,c);
    for(int i = 0 ;i < ans.size() ; i++){
      cout << ans[i] << " ";
    }
    return 0;
}
    
