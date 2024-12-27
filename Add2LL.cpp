#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode(-1);
        ListNode*current=dummy;
      
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int sum=carry;
            if(l1){
                sum=sum+l1->val;
                l1=l1->next;
            } 
            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
            } 
            carry=sum/10;
            ListNode*newNode1=new ListNode(sum%10);
            current->next=newNode1;
            current=current->next;
            if(carry){
                ListNode*newNode2=new ListNode(carry);
                current->next=newNode2;
            }
            
        }
        return dummy->next;
        
    }
};
