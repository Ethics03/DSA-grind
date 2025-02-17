#include <bits/stdc++.h>

using namespace std;

int titleToNumber(string columnTitle) {
        int val = 0;
        for(int i = 0 ; i < columnTitle.size() ; i++){
            int a = columnTitle[i] - 'A'+1;
            val = val*26+a;
        }
        return val;
    }



int main() {
   
  string s = "AAB";

  int ans = titleToNumber(s);
  cout << ans << endl;

    return 0;
}
    
