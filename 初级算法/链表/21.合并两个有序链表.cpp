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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        vector<ListNode*> result;
        int i;
        while(l1 != NULL || l2 != NULL){
            if(l1 == NULL){
                while(l2 != NULL){
                    result.push_back(l2);
                    l2 = l2->next;
                }
                break;
            }
            if(l2 == NULL){
                while(l1 != NULL){
                    result.push_back(l1);
                    l1 = l1->next;
                }
                break;
            }
            if(l1->val <= l2->val){
                result.push_back(l1);
                l1 = l1->next;
            }
            else{
                result.push_back(l2);
                l2 = l2->next;
            }
        }
        for(i = 0; i < result.size() - 1; ++ i){
            result[i]->next = result[i+1];
        }
        if(result[result.size() - 1] != NULL)
            result[result.size() - 1]->next = NULL;
        return result[0];
    }
};