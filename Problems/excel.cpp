#include <bits/stdc++.h>

using namespace std;

 vector<char>letter;
        for(char ch='A';ch<='Z';ch++)
        {
            letter.push_back(ch);
        }
        
        int n=columnNumber;
        string ans;
        vector<int>vec;
        vec.push_back(n);
        while(n>26)
        {
            int q=ceil(n/26.0)-1;
            vec.push_back(q);
            n=q;
        }
        int i=vec.size()-1;
        ans=letter[vec[i]-1];
       long long x=vec[i]*26LL;
        i--;
        while(i>=0)
        {
            int ind=vec[i]-x;
            ans+=letter[ind-1];
            x=vec[i]*26LL;
            i--;
        }
       
        return ans;
    }

int main() {
 
  
  return 0;
}
    
