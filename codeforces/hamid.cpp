#include <bits/stdc++.h>

using namespace std;

int solve(){

  int n , pos;
  string s;
  cin >> n >> pos;
  int poss = pos-1;
  cin >> s;
  int lf = pos;
  int rt = s.length()-pos;
  
  int lfhash = 0;
  int rthash = 0;
  for(int i = poss-1;i >=0; i--){
    lfhash++;
    if(s[i] == '#') break;
    if(i==0) lfhash++;
  }

  for(int i = poss+1;i < n ; i++){
    rthash++;
    if(s[i] == '#') break;
    if(i=n-1) rthash++;
  }
  

 cout << max(lfhash,rthash) << endl;; 
} 

int main() {

  	            cin.tie(0);
        
               int t;
               cin >> t;
              while (t--)  solve();

        return 0;
}
    
