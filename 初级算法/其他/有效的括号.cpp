class Solution {
public:
    bool isValid(string s) {
        
        string::iterator rightPos = s.begin();
        stack<char> temp;		//—π’ª∆•≈‰¿®∫≈
        
        bool result = true;
        
        if(s.size() % 2 == 1) 
            return false;
        if(*rightPos == ')' || *rightPos == '}' || *rightPos == ']')
            return false;
        
        while(rightPos != s.end()){
            if(*rightPos == '(' || *rightPos == '{' || *rightPos == '[')
                temp.push(*rightPos);
            else{
                char tempChar = temp.top();
                temp.pop();
                if(tempChar == '{' && *rightPos != '}'){
                    result = false;
                    break;
                }
                if(tempChar == '(' && *rightPos != ')'){
                    result = false;
                    break;
                }
                if(tempChar == '[' && *rightPos != ']'){
                    result = false;
                    break;
                }
            }
            ++ rightPos;
        }
        if(temp.empty())
            return result;
        else
            return false;
    }
};