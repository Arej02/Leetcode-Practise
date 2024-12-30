#include <iostream>
#include<vector>
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*temp=head;
        ListNode*dummy=new ListNode(-1);
        ListNode*current=dummy;
        int count=1;
        while(temp!=NULL){
            if(count%2==1){
                ListNode*newNode=new ListNode(temp->val);
                current->next=newNode;
                current=current->next;
            }
            count++;
            temp=temp->next;
            
        }
        temp=head;
        int k=1;
        while(temp!=NULL){
            if(k%2==0){
                ListNode*newNode=new ListNode(temp->val);
                current->next=newNode;
                current=current->next;
            }
            k++;
            temp=temp->next;
            
        }
        
        return dummy->next;
        
    }
};