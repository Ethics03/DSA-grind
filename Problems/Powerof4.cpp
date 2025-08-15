#include<bits/stdc++.h>

using namespace std;


bool isPowerOfFour(int n) {
        if (n<=0) return 0;

        int ex=31 - countl_zero((unsigned)n);
        // checking log 2 
        //if the power is even and left shifting 1 by that ex gives back the number then
        // its true

        return (ex&1)==0 && n==1<<ex;
    }

int main(){

  
  
  return 0;
}
