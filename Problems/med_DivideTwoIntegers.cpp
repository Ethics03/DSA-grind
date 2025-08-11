#include<bits/stdc++.h>

using namespace std;




  int divide(int dividend, int divisor) {
         int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; //checking sign 
        if(dividend == divisor) return 1;


        if(dividend == INT_MIN && divisor == -1) return INT_MAX; //overflow condition

        long long  divd = abs((long)dividend); 
        //got alot of errors here (had to (long)dividend was messing up overflow didn't realise)

         long long  divi = abs((long)divisor);
        if(divisor == 1) return dividend;
        if(dividend == -1) return -dividend;
        unsigned int quot = 0;
         while(divd >= divi){
           int n = 0; // take a counter 
           while(divd > (divi << (n+1))) n++; //basically find the largest multiple of the divisor closest and in range of dividend

            divd -= divi << n; // subtract that from the dividend
            quot += 1 << n;    //add the n to the quotent
         }  

         if(quot == (1 << 31) && sign == 1) return INT_MAX; 
         // here again overflow condition workout
         return quot*sign;
    }

int main(){
  


  return 0;
}
