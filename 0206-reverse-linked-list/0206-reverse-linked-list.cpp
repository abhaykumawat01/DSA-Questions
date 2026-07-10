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
        ListNode *tail = head;
        if(head==NULL){
            return head;
        }
        while(tail->next!=NULL){
            tail = tail->next;
        }
        while(head!=tail){
            ListNode *temp = new ListNode(head->val);
            temp->next = tail->next;
            tail->next = temp;
            ListNode *dum = head;
            head = head->next;
            delete dum;
        }
        return tail;
    }
};