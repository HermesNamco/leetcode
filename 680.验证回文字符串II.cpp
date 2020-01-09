class Solution {
public:
    bool validPalindrome(string s) {		//增加一次backup反悔机会
        int front = 0;
        int back = s.size() - 1;
        bool flag = false;
        bool backUpflag = false;
        int backUpFront = -1;
        int backUpBack = -1;
        while(front < back){
            if(s[front] == s[back]){
                ++ front;
                -- back;
            }else{
                if(flag == true){
                    if(!backUpflag && backUpFront != -1){
                        front = backUpFront;
                        back = backUpBack;
                        backUpflag = true;
                        continue;
                    }
                    return false;
                }
                if(s[front + 1] == s[back]){
                    backUpFront = front;
                    backUpBack = back - 1;
                    front  = front + 2;
                    -- back;
                    flag = true;
                }else if(s[front] == s[back - 1]){
                    ++ front;
                    back = back - 2;
                    flag = true;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};