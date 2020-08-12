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

//时间复杂度O(n)，空间复杂度O(1)解法
//将链表前半段反转
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        int count = 0;
        ListNode* pos = head;
        while(pos != nullptr){
            pos = pos -> next;
            ++ count;
        }

        if(count <= 1)
            return true;
        
        int middle_left = 0;
        int middle_right = 0;

        if(count & 1){
            middle_left = count / 2 - 1;
            middle_right = count / 2 + 1;        
        }else{
            middle_left = count / 2 - 1;
            middle_right = count / 2;
        }

        pos = head;
        int now = 0;
        ListNode* last_node = nullptr;
        ListNode* left_head = nullptr;
        ListNode* right_head = nullptr;
        //反转链表前半段，left_head为左半段头节点，right_head为右半段头节点
        while(pos){
            if(now <= middle_left){
                if(now == middle_left){
                    left_head = pos;
                }
                ListNode* next = pos -> next;
                pos -> next = last_node;
                last_node = pos;
                pos = next;
                ++ now;
            }else if(now == middle_right){
                right_head = pos;
                break;
            }else{
                pos = pos -> next;
                ++ now;
            }
        }

        while(left_head != nullptr && right_head != nullptr){

            if(left_head -> val != right_head -> val)
                return false;
            
            left_head = left_head -> next;
            right_head = right_head -> next;

        }
        return true;
    }
};
