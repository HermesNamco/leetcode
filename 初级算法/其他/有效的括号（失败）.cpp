class Solution {
public:
    bool isValid(string s) {
        string::iterator rightPos = s.begin();		//�����ǡ���������{}������"({})"�������
        string::iterator leftPos = s.end() - 1;		//δ����"(([]){})"�������
        bool result = true;
        if(s.size() % 2 == 1) 
            return false;
        while(rightPos < leftPos ){
            if(*rightPos == '('){
                if(*leftPos == ')'){
                    rightPos ++;
                    leftPos --;
                    continue;
                }else if(*(rightPos + 1) == ')'){
                    rightPos += 2;
                    continue;
                }else{
                    result = false;
                    break;
                }
            }else if(*rightPos == '{'){
                if(*leftPos == '}'){
                    rightPos ++;
                    leftPos --;
                    continue;
                }else if(*(rightPos + 1) == '}'){
                    rightPos += 2;
                    continue;
                }else{
                    result = false;
                    break;
                }
            }else if(*rightPos == '['){
                if(*leftPos == ']'){
                    rightPos ++;
                    leftPos --;
                    continue;
                }else if(*(rightPos + 1) == ']'){
                    rightPos += 2;
                    continue;
                }else{
                    result = false;
                    break;
                }
            }else{
                result = false;
                break;
            }
        }
        
        return result;
    }
};