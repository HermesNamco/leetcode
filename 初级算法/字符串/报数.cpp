class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string s = countAndSay(n - 1);   //递归调用，效率较低
        int count = 0;
        char temp = *s.begin();
        string result;
        string::iterator pos = s.begin();
        while(pos != s.end()){
            if(*pos == temp)
                ++ count;
            else{
                result.append(to_string(count));
                result.append(1,temp);
                temp = *pos;
                count = 1;
            }
            ++ pos;
        }
        result.append(to_string(count));
        result.append(1,temp);
        return result;
    }
};