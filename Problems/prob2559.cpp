#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> ans;
        vector<char> vowels = {'a','e','i','o','u'};
        vector<string> words = {"aba","eee","e","nsn","ege"};
        vector<int> volc;
        int i = 0;
        for(int j = 0; j < words.size() ; j++){
                if(find(vowels.begin(), vowels.end(), words[j][0]) != vowels.end() && find(vowels.begin(), vowels.end(), words[j][words[j].length()-1]) != vowels.end()){
                            volc.push_back(j);
                }
        }

                for(int i = 0 ; i < volc.size() ; i++){
                  cout << volc[i];
                }
        

    return 0;
}
    
