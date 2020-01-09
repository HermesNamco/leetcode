class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp;                                         //ά��һ������dp[i]��ʾ����λ��iǰ�����ѡ��
        if(nums.empty())
            return 0;
        else if(nums.size() == 1)
            return nums[0];
        dp.push_back(nums[0]);
        dp.push_back(max(nums[0],nums[1]));
        for(int i = 2; i < nums.size(); ++ i){
            dp.push_back(max(nums[i] + dp[i - 2], dp[i - 1]));//ת�Ʒ���
        }
        return dp.back();
    }
};