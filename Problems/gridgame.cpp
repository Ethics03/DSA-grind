#include <bits/stdc++.h>

using namespace std;

 long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> sum1(n),sum2(n);

        sum1[0] = grid[0][0]; //starting from 0
        sum2[0] = grid[1][0]; //starting from below

        for(int i = 1 ; i < n ; i++){
            sum1[i] = sum1[i-1] + grid[0][i]; //prefix sum for each step
            sum2[i] = sum2[i-1] + grid[1][i];

        }

        long long result = LLONG_MAX;
        for(int i = 0 ; i < n ; i++){
            long long top = (i == n-1) ? 0 : sum1[n-1] - sum1[i];
            

            long long  bot = (i==0) ? 0 : sum2[i-1];
            result = min(result,max(top,bot));
        }
            return result;
        
    }

int main() {
   

    return 0;
}
    
