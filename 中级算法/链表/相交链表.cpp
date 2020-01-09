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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {	//本题中相交链表指不仅指一样，存放的地址也一样
        if(!headA || !headB)
            return NULL;
        ListNode* a = headA;
        ListNode* b = headB;
        while( a != b){
            a = a ? a ->next : headA;	//如果headA,headB长度一样，则遍历一次即可找到
            b = b ? b ->next : headB;	//如果headA,headB长度不同，则当遍历到尾部时将其置回开头再次遍历，a,b遍历相对位置逐渐增加，
        }				//直至找到
        return a;
    }
};