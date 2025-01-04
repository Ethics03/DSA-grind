
using namespace std;

#include <bits/stdc++.h>

using namespace std;
using vi = vector<string>;

void first() {
 int t;
 cin >> t;

while(t--){
  
 long int n;
 cin >> n;
 
 string st = to_string(n);
 int ds = 0;
 for(char ch: st){
    int d = ch - '0';
    if (d * d < 10) {
                ds += d * d;
            } else {
                ds += d;
            }
        }

 if(ds % 9 == 0){
   cout << "YES" << endl;
   
 }
 else{
   cout << "NO" << endl;
 }
   

}
}

int main() {
  
    first();

}

