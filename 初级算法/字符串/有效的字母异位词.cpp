class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_int = 0;
        int t_int = 0;
        if(t.find_first_not_of(s) != t.npos) //确定两个字符串中含的字符类型相同
            return false;
        for(int i = 0; i < s.size(); ++ i) //将string转换成ASCII码之和
            s_int = s_int + s.at(i);
        for(int i = 0; i < t.size(); ++ i) //将string转换成ASCII码之和
            t_int = t_int + t.at(i);
        if(t_int != s_int)                 	//确定两字符串中含的字符数量相同
            return false;
        return true;
    }
};