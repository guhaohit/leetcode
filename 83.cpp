/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *p=head;
        while(p!=NULL){
            ListNode *n = p->next;
            if(n!=NULL){
                if(p->val == n->val){
                    p->next = n->next;
                    continue;
                }
            }
            p=p->next;
        }
        return head;
    }
};