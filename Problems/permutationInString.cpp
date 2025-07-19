#include <bits/stdc++.h>


using namespace std;

//SLIDING WINDOW + FINDING FREQUENCY PROBLEM

//WE SOLVE THE PROBLEM FOR A FIXED LENGTH OF WINDOW AND SLIDE THE WINDOW TO THE LEFT OR RIGHT 
//IF THE ANSWER DOES NOT SATISFY AND UPDATE THE NEW WINDOW BY REMOVING ELEMENTS FROM OLDER ONE


 bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
         
         vector<int> chars1(26,0), chars2(26,0); //vectors for finding frequency  out of all letters
        for(int i = 0 ; i < s1.length(); i++){ // checking the first window if it matches return true
            chars1[s1[i]-'a']++;
            chars2[s2[i]-'a']++;
        }
        if(chars1 == chars2) return true;
        int rmv=0;
        for(int i = s1.length(); i < s2.length(); i++){ //shifting the window to the right
            chars2[s2[i]-'a']++; // adding the frequency of the element in next window
            chars2[s2[rmv]-'a']--; // remove the character from the old window
             
            rmv++;
            if(chars1 == chars2) return true; //if the window frequency matches we return true

        }
        return false;

    }

int main() {
    
    bool ans;
    ans = checkInclusion("ab","asadab");
    cout << ans << endl;
  return 0;
}
    
