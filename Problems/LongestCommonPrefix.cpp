#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> strs) {
      string ans="";

        sort(strs.begin(),strs.end());
        
        int n=strs.size();
        string fir=strs[0],last=strs[n-1];
        for(int i=0;i<min(fir.size(),last.size());i++){

            if(fir[i]!=last[i]){

                return ans;
            }
            ans+=fir[i];
        }
        return ans;
    }

int main() {


    return 0;
}
    
