#include <bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string s) {

  //SLIDING WINDOW 

  // NOT THE MOST OPTIMAL -> MY SOLUTION 
        int count = 0;
        
        // edgecase: 2 or move values at any place in a window can be equal
        // if all are equal in the array: ans 1 (done)

        unordered_set<char> window;
        int l = 0;
        window.insert(s[0]);
        for(int i = 1; i < s.size() ; i++){
              while(window.count(s[i])){
                window.erase(s[l]);
                l++;
              }
              window.insert(s[i]);              
              count = max(count,(i-l)+1);
                      
             }

        return count;
    }

//
 int lengthOfLongestSubstringOptimal(string s) {
        int count = 0;
        //MOST OPTIMAL SOLUTION
        // edgecase: 2 or move values at any place in a window can be equal
        // if all are equal in the array: ans 1 (done)

        //optimal solution: took a hashmap -> containing the char and its index int lengthOfLongestSubstring(string s) {
        int count = 0;
        
        // edgecase: 2 or move values at any place in a window can be equal
        // if all are equal in the array: ans 1 (done)

        //optimal solution: took a hashmap -> containing the char and its index
        //if the current index is found in the window, increase l that many times
        // else add the index of the character with the character in the hashmap 
        // then (i-l)+1 would be the length of the window with unique elements
        //get the max each time to get the answer
        
        if(s == ""){
            return 0;
        }
        unordered_map<char,int> checkmap;
        int l = 0;
       
        for(int i = 0; i < s.size() ; i++){
            if(checkmap.find(s[i]) != checkmap.end()){
                l = max(l, checkmap[s[i]]+1);
            }
            checkmap[s[i]] = i;
            count = max(count, i-l+1);
        }


        return count;
    }
        //if the current index is found in the window, increase l that many times
        // else add the index of the character with the character in the hashmap 
        // then (i-l)+1 would be the length of the window with unique elements
        //get the max each time to get the answer
        
        if(s == ""){
            return 0;
        }
        unordered_map<char,int> checkmap;
        int l = 0;
       
        for(int i = 0; i < s.size() ; i++){
            if(checkmap.find(s[i]) != checkmap.end()){
                l = max(l, checkmap[s[i]]+1);
            }
            checkmap[s[i]] = i;
            count = max(count, i-l+1);
        }


        return count;
    }




int main() {
    
    return 0;
}


    
