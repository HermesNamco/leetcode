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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 1;
        ListNode* node = head;
        ListNode* temp;
        ListNode* pre;
        while(node->next != NULL){
            ++ size;
            node = node->next;
        }
        if(size == 1)
            return head = NULL;
        node = head;
        for(int i = 0; i < size-n; ++ i){
            if(node -> next != NULL){
                pre = node;
                node = node->next;
            }
        }
        if(node -> next != NULL){
            temp = node->next;
            node->val = temp->val;
            node->next = temp->next;
            delete temp;
        }else{
            pre->next = NULL;
            delete node;
        }
        return head;
    }
};