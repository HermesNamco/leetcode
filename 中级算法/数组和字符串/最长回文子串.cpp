class Solution {
public:
    string longestPalindrome(string s) {		//动态规划实现
        if(len == 0)
            return s;

        int left = 0;			//记录子串右端
        int right = 0;			//记录子串左端
        int max = 0;			//记录最长回文串

        vector< vector<bool> > dp(len,vector<bool>(len,false));	//dp[i][j]表示从第i个字符到第j个字符是否为回文字串
        for(int i = len - 2; i >= 0; -- i){			//i倒序变量，因为dp[i][j]取决于dp[i+1][j-1]的值
            dp[i][i] = true;
            for(int j = i + 1; j < len;++ j){
                if(s[i] == s[j] && (dp[i + 1][j - 1] || (j - i) <= 2)){		
                    dp[i][j] = true;
                }
                if(dp[i][j] && j - i > max){
                    max = j - i;
                    left = i;
                    right = j;
                }
            }
        }
        return s.substr(left,right - left + 1);
    }
};