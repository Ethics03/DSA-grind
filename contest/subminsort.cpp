#include <bits/stdc++.h>
using namespace std;

#define fast_io  ios::sync_with_stdio(false);  cin.tie(nullptr);

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        int vals[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> vals[i];
        }
        
        int cur = vals[1];
        bool ok = true;
        for (int i = 2; i <= n; i++) {
            if (cur > vals[i]) {
                cout << "NO" << endl;
                ok = false;
                break;
            } else {
                cur = vals[i] - cur;
            }
        }
        
        if(ok) {
            cout << "YES" << endl;
        }
    } 
}

int main() {

    solve();

    return 0;
}
