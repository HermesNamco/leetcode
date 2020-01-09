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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {	//�������ཻ����ָ����ָһ������ŵĵ�ַҲһ��
        if(!headA || !headB)
            return NULL;
        ListNode* a = headA;
        ListNode* b = headB;
        while( a != b){
            a = a ? a ->next : headA;	//���headA,headB����һ���������һ�μ����ҵ�
            b = b ? b ->next : headB;	//���headA,headB���Ȳ�ͬ���򵱱�����β��ʱ�����ûؿ�ͷ�ٴα�����a,b�������λ�������ӣ�
        }				//ֱ���ҵ�
        return a;
    }
};