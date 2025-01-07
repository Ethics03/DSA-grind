#include <bits/stdc++.h>

using namespace std;

string fractionToDecimal(long long int num, long long int den) {
       string ans;

       if((num < 0 || den < 0) && !(num < 0 && den < 0)){
        ans += "-";
       }
       if(num == 0) return "0";
       if(den == 1) return to_string(num); 

       num=abs(num),den=abs(den);
       ans += to_string(num/den);

       if(num % den == 0) return ans;

       ans += ".";

       unordered_map<int,int> vals;

       for(long long int i = num%den ;i != 0; i %= den){
        if(vals.count(i) > 0){
            ans.insert(vals[i],"(");
            ans += ')';
            break;
        }
            vals[i] = ans.size();
            i =  i*10;
            ans += to_string(i/den);
       }
           return ans;
    }

int main() {

string ans = fractionToDecimal(10,5);
cout << ans << endl;

    return 0;
}
    
