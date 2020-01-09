class Solution {
public:
    string longestPalindrome(string s) {		//��̬�滮ʵ��
        if(len == 0)
            return s;

        int left = 0;			//��¼�Ӵ��Ҷ�
        int right = 0;			//��¼�Ӵ����
        int max = 0;			//��¼����Ĵ�

        vector< vector<bool> > dp(len,vector<bool>(len,false));	//dp[i][j]��ʾ�ӵ�i���ַ�����j���ַ��Ƿ�Ϊ�����ִ�
        for(int i = len - 2; i >= 0; -- i){			//i�����������Ϊdp[i][j]ȡ����dp[i+1][j-1]��ֵ
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