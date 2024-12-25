//This usese an iterative approach to reverse the Linked List.
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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp=head;
        ListNode*previous=NULL;
        
        while(temp!=NULL){
            ListNode*front=temp->next;
            temp->next=previous;
            previous=temp;
            temp=front;
        }
        return previous; 
    }
};