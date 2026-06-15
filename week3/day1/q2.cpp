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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* head1=nullptr;
        while(temp!=nullptr){
            ListNode* dummy=new ListNode(temp->val);
            if(head1==nullptr) head1=dummy;
            else{
                dummy->next=head1;
                head1=dummy;
            }
            temp=temp->next;
        }
        return head1;
        
        
    }
};