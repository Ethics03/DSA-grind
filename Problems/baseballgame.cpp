#include <bits/stdc++.h>

using namespace std;

int calPoints(vector<string> operations) {
        vector<string> cal;

        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C"){
                if(!cal.empty()){
                    cal.pop_back();
                }
            }
            else if(operations[i] == "D"){
                if(!cal.empty()){
                    int op = stoi(cal.back())*2;
                    cal.push_back(to_string(op));
                }
            }
            else if(operations[i] == "+"){
                if(cal.size() >= 2){
                    int opsum = stoi(cal.back())+stoi(cal[cal.size()-2]);
                    cal.push_back(to_string(opsum));
                }
            }
            else{
                cal.push_back(operations[i]);
            }
        }
        int val = 0;
        for(int j = 0 ; j < cal.size() ; j++){
            val += stoi(cal[j]);
        }
        return val;
    }

int main() {
    vector<string> ops = {"5","2","C","D","+"};

    int ans = calPoints(ops);

    cout << ans << endl;
    return 0;
}
    
