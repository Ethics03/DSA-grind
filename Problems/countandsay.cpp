#include <bits/stdc++.h>

using namespace std;

string countAndSay(int n) {
    if(n == 1){
        return "1";
    }
    string prev = countAndSay(n-1);
    string res = "";
    int i = 1;
    int count = 1;
    while(i < prev.length()){
        if(prev[i] == prev[i-1]){
            count++;
        }
        else{
            res.append(to_string(count)+prev[i-1]);
            count = 1;
        }
        i++;
    }
    res.append(to_string(count)+prev[prev.length()-1]);
    return res;
    }

int main() {
    string ans = countAndSay(5);

    cout << ans << endl;
    return 0;
}
    
