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
        if(head==NULL){
            return NULL;
        }
        ListNode *cur = head,*p = head;
        int temp = cur->val;
        while(cur->next!=NULL){
            int tag = 0;
            while(p->next!=NULL && p->next->val==temp){
                p = p->next;
                tag++;
            }
            if(p->next!=NULL){
                temp = p->next->val;
            }
            //如果开头有重复元素，去掉
            if(cur==head && p!=cur && cur->val == p->val){
                head = p->next;
                return deleteDuplicates(head);
            }
            //如果不是开头
            else{
                //有重复元素，去掉
                if(tag>0){
                    cur->next = p->next;
                    p = p->next;
                }
                //没有重复元素
                else{
                    cur = p;
                    p = p->next;
                }
            }
        }
        return head;
    }
};