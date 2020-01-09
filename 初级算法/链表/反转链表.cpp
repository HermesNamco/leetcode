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
    ListNode* reverseList(ListNode* head) {
        vector<ListNode*> list;
        ListNode* node;
        ListNode* thead;
        if(head == NULL)
            return NULL;
        while(head->next != NULL){
            list.push_back(head);
            head = head->next;
        }
        thead = head;
        while(!list.empty()){
            node = list.back();     // list.back 返回末尾元素
            list.pop_back();        // list.pop_back 删除末尾元素
            head->next = node;
            head = head->next;
        }
        head->next = NULL;
        return thead;
    }
};