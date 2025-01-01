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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==n){
            ListNode*newHead=head->next;
            delete head;
            return newHead;
        }
        int position=count-n-1;
        temp=head;
        while(position>0){
            temp=temp->next;
            position--;
        }
        if (temp && temp->next) {
            ListNode* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode; 
        }

        return head;
        
    }
};