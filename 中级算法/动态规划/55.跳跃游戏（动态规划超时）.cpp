class Solution {		//通过74/75个用例，最后一个用例超时，使用动态规划实现
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