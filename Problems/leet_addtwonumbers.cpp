#include<bits/stdc++.h>

using namespace std;
 
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
     };
 
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* test  = new ListNode(0);
        ListNode* cur = test;
        if (!l1 && !l2) {
            return nullptr;
        }
     
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int x = (l1!=nullptr)? l1->val : 0;
            int y = (l2 != nullptr)? l2->val : 0;

            int sm = x + y + carry; 
            carry = sm / 10;
            sm  = sm % 10;
            cur -> next = new ListNode(sm);
            
            cur = cur->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
            
        } 
        
        ListNode* ans = test -> next;
        delete test;
        return ans;

    }
    
    int main() {
        return 0;
    }