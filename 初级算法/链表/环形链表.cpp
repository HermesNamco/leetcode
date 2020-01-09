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
    bool hasCycle(ListNode *head) {
        while(head != NULL){
            if(head->val != 2147483647)		//给访问过的节点做一个标志
                head->val = 2147483647;
            else
                return true;
            head = head->next;
        }
        return false;
    }
};