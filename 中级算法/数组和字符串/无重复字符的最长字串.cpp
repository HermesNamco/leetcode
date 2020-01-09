class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1);		//ASCII码总计256个，每位表示一个字符，值表示该字符在s中的位置
        int res = 0,left = -1;		//res记录最长字串的长度，left记录被舍弃的位数，即从第left + 1位开始记录字串
        for(int i = 0;i < s.size(); ++ i){
            left = max(left,m[s[i]]);	//若该字符未重复过，则一直记-1；若重复，则从上一次该字符出现的位置开始记录
            m[s[i]] = i;		//记录字符位置
            res = max(res, i - left);	//选历史过往记录过的最大长度
        }
        return res;
    }
};