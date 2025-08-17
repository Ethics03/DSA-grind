#include<bits/stdc++.h>

using namespace std;

int maximum69Number (int num) {
      
      // THE HINT WAS AN ACTUAL TROLL LOL

        // first occurring 6 from left replacing it by 9 will give us the highest number
        // as left places have higher value than the right so changing the highest 6 to 9
        //will give us the highest number.
        string vals = to_string(num);
        for(int i = 0 ; i < vals.size(); i++){
            if(vals[i] == '6'){
                vals[i] = '9';
                break;
            }  
        }
        return stoi(vals);
    }


int main(){
  


  return 0;
}
