#include <bits/stdc++.h>

using namespace std;


int maxCount(vector<int> banned, int n, int maxSum) {
  
  unordered_set<int>ban(banned.begin(),banned.end());

  long long s = 0;
  int count = 0;


  for(int i = 1 ; i <= n ; i++){
    if(ban.count(i)) continue;
    s += i;
    if(s > maxSum){
      break;
    }
    count++;
  }

  return count;

    }


int main() {
  
vector<int> banned = {1,6,5};
int n = 5;
int maxSum = 6;

cout << maxCount(banned,n,maxSum);

    return 0;
}
    
