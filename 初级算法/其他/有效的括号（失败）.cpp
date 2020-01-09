class Solution {
public:
    bool isValid(string s) {
        string::iterator rightPos = s.begin();		//仅考虑“【】（）{}”，和"({})"这种情况
        string::iterator leftPos = s.end() - 1;		//未考虑"(([]){})"这种情况
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