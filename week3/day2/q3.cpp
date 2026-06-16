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
    ListNode* reverse(ListNode* head){
        ListNode *start =head;
        ListNode *prev =nullptr;
        ListNode* front=nullptr;
        while(start!=nullptr){
         front=start->next;
         start->next=prev;
         prev=start;
         start=front;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        ListNode* newhead=nullptr;
        if(head==nullptr|| head->next==nullptr) return true;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        newhead=reverse(slow->next);
        ListNode* temp2=newhead;
        while(temp2!=nullptr){
            if(temp->val!=temp2->val){
                ListNode* nn=reverse(newhead);
                slow->next=nn;
                return false;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
                ListNode* nn=reverse(newhead);
                slow->next=nn;
                return true;

    }
};