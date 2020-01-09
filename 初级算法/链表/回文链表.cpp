class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        vector<ListNode*> temp;
        while(head != NULL){		//链表不方便任意位置访问，把它转换成数组更高效，链表便于进行增加和删除操作
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