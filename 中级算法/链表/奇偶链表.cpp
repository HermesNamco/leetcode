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
    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head -> next == NULL || head->next->next == NULL)
            return head;

        int flag = 0;				//flag 标记偶数链长度
        bool out = 0;
        ListNode* l2 = head->next->next;
        ListNode* l1 = head;
        ListNode* temp;

        while(1){
            if(l2->next != NULL && l2->next->next != NULL)
                temp = l2->next->next;
            else
                out = 1;
                     
            swap(l1,l2,flag);			//将奇数与偶数链整体做交换
            l1 = l1->next;
            if(out)
                break;
            else
                l2 = temp;
            flag ++;
        }

        return head;
    }
    
    void swap(ListNode* l1,ListNode* l2,int flag){
        
        ListNode* temp = l2->next;
        ListNode* temp2 = l1->next;
        l1->next = l2;
        l2->next = temp2;
        
        while(flag != 0){
            temp2 = temp2->next;
            -- flag;
        }
        
        temp2->next = temp;
    }
};