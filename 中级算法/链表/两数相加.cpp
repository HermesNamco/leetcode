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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = new ListNode(0);
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        head->val = l1->val + l2->val;
        l1 = l1->next;
        l2 = l2->next;
        if(head->val >= 10){
            carry = 1;
            head->val = head->val - 10;
        }
        ListNode* save = head;
        while(l1 != NULL || l2 != NULL || carry == 1){
            
            if(l1 != NULL && l2 != NULL){
                ListNode* temp = new ListNode(carry + l1->val + l2->val);
                carry = 0;
                if(temp->val >= 10){
                    carry = 1;
                    temp->val = temp->val - 10;
                }
                save->next = temp;
                save = save->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            
            else if(l1 == NULL && l2 != NULL){
                ListNode* temp = new ListNode(carry + l2->val);
                carry = 0;
                if(temp->val >= 10){
                    carry = 1;
                    temp->val = temp->val - 10;
                }
                save->next = temp;
                save = save->next;
                l2 = l2->next;
            }
            else if(l1 != NULL && l2 == NULL){
                ListNode* temp = new ListNode(carry + l1->val);
                carry = 0;
                if(temp->val >= 10){
                    carry = 1;
                    temp->val = temp->val - 10;
                }
                save->next = temp;
                save = save->next;
                l1 = l1->next;
            }
            else if(l1 == NULL && l2 == NULL){
                ListNode* temp = new ListNode(1);
                save->next = temp;
                carry = 0;
            }
                
        }
        return head;
    }
};