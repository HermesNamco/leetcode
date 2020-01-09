class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1);		//ASCII���ܼ�256����ÿλ��ʾһ���ַ���ֵ��ʾ���ַ���s�е�λ��
        int res = 0,left = -1;		//res��¼��ִ��ĳ��ȣ�left��¼��������λ�������ӵ�left + 1λ��ʼ��¼�ִ�
        for(int i = 0;i < s.size(); ++ i){
            left = max(left,m[s[i]]);	//�����ַ�δ�ظ�������һֱ��-1�����ظ��������һ�θ��ַ����ֵ�λ�ÿ�ʼ��¼
            m[s[i]] = i;		//��¼�ַ�λ��
            res = max(res, i - left);	//ѡ��ʷ������¼������󳤶�
        }
        return res;
    }
};