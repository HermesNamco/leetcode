class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        vector<ListNode*> temp;
        while(head != NULL){		//������������λ�÷��ʣ�����ת�����������Ч��������ڽ������Ӻ�ɾ������
            temp.push_back(head);
            head = head->next;
        }
        vector<ListNode*>::iterator pos = temp.begin();
        vector<ListNode*>::iterator rpos = temp.end() - 1;
        while(pos < rpos){
            if((*pos)->val != (*rpos)->val)
                return false;
            ++ pos;
            -- rpos;
        }
        return true;
    }
};