#include <bits/stdc++.h>
 
 
using namespace std;
 
int fabon(){
 
int vals[5];
 
for(int i = 0 ; i < 5 ; i++){
  if(i == 2){
    continue;
  }
 else{
  cin >> vals[i];
 }
}
int ans1 = 0;
int ans2 = 0;
int ans3 = 0;
vals[2] = vals[1]+vals[0];
 
for(int i = 2 ; i < 5 ; i++){
  if(vals[i] == vals[i-1]+vals[i-2]){
    ans1++;
  }
}
 
vals[2] = vals[3]-vals[1];
 
for(int i = 2 ; i < 5 ; i++){
  if(vals[i] == vals[i-1]+vals[i-2]){
    ans2++;
  }
}
 
vals[2] = 0;
 
for(int i = 2 ; i < 5 ; i++){
  if(vals[i] == vals[i-1]+vals[i-2]){
    ans3++;
  }
}
 
if(ans1 != ans2 != ans3){
  return max({ans1,ans2,ans3});
}
else if(ans1 == ans2 != ans3){
  return ans1;
}
return ans3;
}
 
 
int main() {
 
  int t;
  cin >> t;
  int ans[t];
  for(int i = 0; i < t ; i++){
    ans[i] = fabon();
  }
  for(int i = 0; i < t ; i++){
    cout << ans[i] << endl;
  }
 
    return 0;
 
}
    
