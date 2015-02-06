/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL)
            return;
        TreeLinkNode* start;
        TreeLinkNode* curNode;
        TreeLinkNode* nextNode;
        while(root != NULL){
            start = findStartNodeNextLev(root);
            curNode = start;
            nextNode = findNextNodeNextLev(root, start);
            while(nextNode != NULL){
                curNode -> next = nextNode;
                curNode = nextNode;
                nextNode = findNextNodeNextLev(root, curNode);
            }
            root = start;
        }
    }
    TreeLinkNode* findNextNodeNextLev(TreeLinkNode* &cur, TreeLinkNode* curNextLev){
        if(cur -> left == curNextLev && cur -> right != NULL){
            return cur -> right;
        }else{
            while(cur -> next != NULL){
                cur = cur -> next;
                if(cur -> left != NULL && cur -> left != curNextLev) return cur -> left;
                if(cur -> right != NULL && cur -> right != curNextLev) return cur -> right;
            }
        }
        return NULL;
    }
    TreeLinkNode* findStartNodeNextLev(TreeLinkNode* node){
        if(NULL == node) return NULL;
        if(node -> left != NULL) return node -> left;
        return findNextNodeNextLev(node, node -> left);
    }
};