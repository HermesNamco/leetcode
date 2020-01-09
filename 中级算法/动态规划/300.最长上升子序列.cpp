//动态规划实现，时间复杂度O（N^2）
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())
            return 0;
        vector<int> copy(nums);
        sort(copy.begin(),copy.end());
        int min = copy.front();
        if(min < 0){						//避免出现dp数组下标为负数的情况
            for(int i = 0;i < nums.size(); ++ i){
                nums[i] -= min;
                copy[i] -= min;
            }
                
        }
        vector<int> dp(copy.back() + 1,0);		//表示以下标数结尾的最长子序列，值为序列长度
        int result = 0;
        for(auto i : nums){
            int max = 0;
            for(int j = 0;j < i; ++ j){
                if(dp[j] > max)
                    max = dp[j];
            }
            dp[i] = max + 1;
            if(result < dp[i])
                result = dp[i];
        }
        return result;
    }
};