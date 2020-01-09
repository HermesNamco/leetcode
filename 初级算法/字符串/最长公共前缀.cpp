class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        vector<string>::iterator str_pos = strs.begin();
        int size =  2147483647;
        string result;
        char temp;
        for(int i = 0; i < strs.size(); i ++){
            if(size > (*str_pos).size())
                size = (*str_pos).size();
            ++ str_pos;
        }
        str_pos = strs.begin();
        for(int i = 0;i < size;++ i){
            temp = *((*str_pos).begin() + i);    //取vector中第1个字符串中的第i个字符
            while(str_pos != strs.end()){
                if(temp != *((*str_pos).begin() + i))
                    return result;
                ++ str_pos;
            }
            result.append(1,temp);
            str_pos = strs.begin();
        }
        return result;
    }
};