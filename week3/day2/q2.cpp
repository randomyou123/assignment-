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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cont = 1;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* count = head;
        int size = 1;

        while (count->next!= nullptr) {
            size++;
            count = count->next;
        }
        if(size==1) return nullptr;
        if(size==n) {
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }

        while (cont <= (size-n)) {
            prev = temp;
            temp = temp->next;
            cont++;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};