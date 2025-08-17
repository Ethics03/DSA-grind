#include<bits/stdc++.h>


using namespace std;


 string addBinary(string a, string b) {

   // BASICALLY WE TAKE OUT THE CARRY OF THE 2 BITS IN INTEGER FORM
  // EG : 1 + 1 + 1 = 3 -> 3 % 2 = 1; MEANS THE BIT TO BE ADDED TO STRING 1 
  // THEN DIVIDE CARRY / 2 SO  3 / 2 = 1 MEANS CARRY GOES BACK TO ITS BINARY VALUE EITHER 1 OR 0
  // THEN just add ansstring += carry % 2 + '0';
   }
          int as = a.size()-1;
          int bs = b.size()-1;
          int carry = 0;
          string ans;
          while(as >= 0 || bs >= 0 || carry){
            if(as >= 0){
                carry += a[as--] - '0';
            }
            if(bs >= 0){
                carry += b[bs--] - '0';
            }
            ans += carry % 2 + '0';
            carry /= 2;
          }
            reverse(ans.begin(), ans.end());
            return ans;
    }

int main(){

}
