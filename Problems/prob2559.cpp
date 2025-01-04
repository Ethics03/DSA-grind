#include <bits/stdc++.h>

using namespace std;

vector<int> vowelStrings(vector<string> words, vector<vector<int>> queries) {
        vector<int> ans;
        int n = words.size();
        unordered_set<char> vowels = {'a','e','i','o','u'};
        vector<int> volc(n,0);
        for(int j = 0; j < n ; j++){
                if(vowels.count(words[j].front()) && vowels.count(words[j].back())){
                            volc[j] = 1;
                }
                if(j > 0){
                    volc[j] += volc[j-1];
                }
        }
        for(const auto q : queries){
            int count = volc[q[1]]  - (q[0] > 0 ? volc[q[0]-1] : 0);
            ans.push_back(count);
        }
        return ans;
    }

int main() {
   vector<string> words =  {"aba","bcb","ece","ada"};
   vector<vector<int>> queries = {{1,2},{0,3},{1,3}};
   vector<int> ans = vowelStrings(words,queries);
  for(int i = 0 ; i < ans.size(); i++){
      cout << ans[i] << " " ;
  }

    return 0;
}
    
