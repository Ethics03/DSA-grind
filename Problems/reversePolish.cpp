#include <bits/stdc++.h>

using namespace std;


//STACK OPERATION TO GET THE OPERATORS AND DO THE OPERATION BY POPPING AND PUSHING THE RESULT


// dk why it was medium actually was easy level
 int evalRPN(vector<string>& tokens) {
        stack<int> s;
        string op = "+-/*";
        for(string c: tokens){
           
            if(op.find(c) != string::npos ){
                
                int val1 = s.top(); s.pop();
                int val2 = s.top(); s.pop();
                if(c == "+") s.push(val2+val1);
                else if(c == "-") s.push(val2-val1);
                else if(c == "*") s.push(val2*val1);
                else if(c == "/") s.push(val2/val1);
            
            }
            else{
            s.push(stoi(c));
            }
        }
        return s.top();
    }

int main() {
      return 0;
}
    
