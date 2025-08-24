#include <bits/stdc++.h>

using namespace std;

void solve(){
  int count = 0; 
  int n , k;
  cin >> n >> k;
  vector<int> s(n);
  vector<int> t(n);

  for(int i = 0 ; i < n ; i++){
    cin >> s[i];
  }
  for(int i = 0 ; i < n ; i++){
    cin >> t[i];
  }

  for(int i = 0 ; i < n ; i++){
   
    
    
  }

  if(count == t.size()){
    cout << "YES" << endl;
    return;
  }
  else{
    cout << "NO" << endl;
    return;
  }

} 

int main() {

  	            cin.tie(0);
        
               int t;
               cin >> t;
              while (t--)  solve();

        return 0;
}
    
