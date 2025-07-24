#include<bits/stdc++.h>

using namespace std;


// USED STACK -> MADE A MINSTACK TO CALCULATE MIN AT EACH STEP OF PUSH POP OR RETRIVAL 
// SO THAT WILL BE O(n) SPACE and O(1) for each call in each function

class MinStack {
public:
    stack<long long> stk;
    stack<long long> minstack;
   
    MinStack() {
    }
    
    void push(int val) {
        if(stk.empty()){
            stk.push(val);
            minstack.push(val);
        }     
        else{
            if(val>minstack.top()) stk.push(val);
            else{
                minstack.push(val);
                stk.push(val);
            }
        }
    }
    
    void pop() {
        if(stk.empty()) return;
        long long val = stk.top();
        stk.pop();
        if(val <= minstack.top()) minstack.pop();
    }
    
    int top() {
        if(stk.empty()) return -1;
        if(stk.top() > minstack.top()) return stk.top();
        return minstack.top();       
            }
    
    int getMin() {
        if(stk.empty()) return -1;
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
