#include <bits/stdc++.h>


//DIV 3: SKIBIDI AND OHIO

using namespace std;

void solve(){
  string s;
  cin >> s;
  bool pair = false;
  for(int i = 0 ; i < s.length()-1 ; i++){
    if(s[i] == s[i+1]){
      pair = true;
      break;
}
}
    if(pair){
      cout << 1 << '\n';
    }
    else{
      cout << s.length() << '\n';
    }
  
}

int main() {
  
  int t;
  cin >> t;
  while(t--){
    solve();
  }



    return 0;
}
    
