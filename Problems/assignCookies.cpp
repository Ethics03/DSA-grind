#include <bits/stdc++.h>

using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());
     int a = 0;
     int k = 0;
    while(a < g.size() && k < s.size()){
        if(s[k] >= g[a]){
            a++;
        }
        k++;
    }
        return a;
    }


int main() {
  
  //output here
  return 0;
}
    
