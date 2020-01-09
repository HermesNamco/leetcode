class Solution {		//ͨ��74/75�����������һ��������ʱ��ʹ�ö�̬�滮ʵ��
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() <= 1)
            return true;
        
        vector<bool> dp(nums.size(),false);
        
        *(dp.end() - 1) = true;
        
        for(int i = dp.size() - 2;i >= 0;--i){
            for(int j = 1;j <= nums[i];++ j){
                if(dp[i + j] == true){
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[0];
    }
};