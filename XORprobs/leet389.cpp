#include <bits/stdc++.h>
using namespace std;


// TYPES
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

// FUNCTIONS
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

// PRINTS
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

// UTILS
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

ll gcd(ll a,ll b) { return b==0 ? a : gcd(b, a%b); }
ll lcm(ll a,ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a<=1) return 0; for (ll i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

// TYPEDEFS
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


// --------------------------------------------------------------------------------------



//SOLUTION 


// using XOR - recently learnt that it's really good for finding differences as 
// x ^ x = 0 , so whatever is the difference will be left out. 
//

 char findTheDifference(string s, string t) {
            int xorval = 0;
            for(char x : s){
                xorval ^= x;
            }
            for(char x : t){
                xorval ^= x;
            }
            return char(xorval);
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}


    
