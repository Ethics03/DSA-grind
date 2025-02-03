#include <bits/stdc++.h>

using namespace std;

//advent of code prob1 2024

int main() {
  vector<int> l1;
  vector<int> l2;
  for(int i = 0 ; i < 1000; i++){
    int x , y;
    cin >> x >> y;
    l1.push_back(x);
    l2.push_back(y);
  }
  sort(l1.begin(),l1.end());
  sort(l2.begin(),l2.end());
  
  int f = 0;
  for(int i = 0 ; i < 1000 ; i++){
      int ans = abs(l1[i]-l2[i]);
      f += ans;
  }
  
  cout << f << endl;

   
    return 0;
}
    
