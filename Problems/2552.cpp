#include <bits/stdc++.h>

using namespace std;

//MAXIMUM NUMBER OF INTEGERS TO CHOOSE FROM A RANGE I

int maxCount(vector<int>& banned, int n, int maxSum) {
    bitset<10001> xNot = 0;
    for(int x: banned){
        xNot[x] = 1;
    }
    long long int s = 0;
    int val = 0;
    for(int i=1;i<=n && s <= maxSum;i++){
        if(!xNot[i]){
            s += i;
            val++;
        }
}
    return (s<=maxSum)?val:val-1;
}

int main() {
    
    return 0;
}
    
