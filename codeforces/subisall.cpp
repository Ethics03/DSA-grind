#include<bits/stdc++.h>


using namespace std;

void solve(){
    int n;
   cin >> n;
    vector<int> s(n);
    int score = 0;
    int sm,ones,zeroes=0;
   
    for(int i = 0 ; i < n ; i++){
            cin >> s[i];
            if(s[i] == 0){
                zeroes++;
            }
            else if(s[i] == 1){
                ones++;
            }
            score += s[i];
    } 
   
    score = score + min(zeroes,ones)*2 - min(zeroes,ones);
    if(zeroes > ones){
        score = score+zeroes-ones;
    }
    cout << score << endl;
    return;
}



int main(){

    cin.tie(0);
        
               int t;
               cin >> t;
              while (t--)  solve();
    return 0;

}