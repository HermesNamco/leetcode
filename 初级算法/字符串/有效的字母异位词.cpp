class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_int = 0;
        int t_int = 0;
        if(t.find_first_not_of(s) != t.npos) //ȷ�������ַ����к����ַ�������ͬ
            return false;
        for(int i = 0; i < s.size(); ++ i) //��stringת����ASCII��֮��
            s_int = s_int + s.at(i);
        for(int i = 0; i < t.size(); ++ i) //��stringת����ASCII��֮��
            t_int = t_int + t.at(i);
        if(t_int != s_int)                 	//ȷ�����ַ����к����ַ�������ͬ
            return false;
        return true;
    }
};