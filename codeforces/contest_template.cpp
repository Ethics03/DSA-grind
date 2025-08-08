#include <bits/stdc++.h>
using namespace std;

/* clang-format off */




/* clang-format on */
void solve(){
	int n;
	cin >> n;
  

	vector<int> vec(n);
  unordered_set<int> val;
	for(int i = 0 ; i < n ; i++) cin >> vec[i];	
	for(int i = 0 ; i < n ; i++){
      if(vec[i] != -1){
        val.insert(vec[i]);
      }
  }
  if(val.size() >= 2 || val.find(0) != val.end()){
    cout << "NO" << endl;
    return;
  }

	cout << "YES" << endl;
	return;
}
/* Main()  function */
int main()
{
	           
               cin.tie(0);
        
               int t;
               cin >> t;
              while (t--) solve();

            }
	
	

