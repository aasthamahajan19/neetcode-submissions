/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp1->next && temp1->next->next){
            temp=temp->next;
            temp1=temp1->next->next;
        }
        ListNode* pre=NULL;
        ListNode* cur=temp->next;
        temp->next=NULL;

        while(cur!=nullptr){
            ListNode* newptr=cur->next;
            cur->next=pre;
            pre=cur;
            cur=newptr;
        }
        ListNode* first=head;
        ListNode* second=pre;
        while(second!=nullptr){
            ListNode *temp2 = first->next;
            ListNode *temp3 = second->next;

            first->next = second;
            second->next = temp2;

            first = temp2;
            second = temp3;
        }


    }
};
