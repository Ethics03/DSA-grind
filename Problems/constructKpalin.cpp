#include <bits/stdc++.h>

using namespace std;

bool canConstruct(string s, int k) {
        unordered_map<char,int> vals;
        int rem = 0;
        if(s.size() < k){
            return false;
        }
        for(char c : s){
            vals[c]++;
        }
        for(auto& pair: vals){
          int fr = pair.second;
            if(fr % 2 == 1){
                rem++;
            }
        }
         if(rem <= k && k <= s.size()){
            return true;
         }
         return false;
    }

int main() {

bool ans = canConstruct("abaaacbbac",6);
cout << ans << endl;

    return 0;
}
    
