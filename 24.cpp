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
    ListNode *swapPairs(ListNode *head) {
        if(head==NULL)
            return NULL;
        ListNode *p=head;
        ListNode *pre=p;
        ListNode *n=p->next;
        if(p!=NULL && n!=NULL)
            head = head->next;
        while(p!=NULL && n!=NULL){
            pre->next = n;
            p->next = n->next;
            n->next = p;

            pre = p;
            p = p->next;
            if(p!=NULL)
                n=p->next;
        }
        return head;
    }
};