#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode*fast=head;
        ListNode*slow=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)break;
        }
        if(slow!=fast) return NULL;
        ListNode*temp=head;
        while(temp!=slow){
            slow=slow->next;
            temp=temp->next;
        }
        return temp;
        
    }
};