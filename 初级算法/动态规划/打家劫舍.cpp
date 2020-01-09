class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp;                                         //维护一个数组dp[i]表示，在位置i前的最好选择
        if(nums.empty())
            return 0;
        else if(nums.size() == 1)
            return nums[0];
        dp.push_back(nums[0]);
        dp.push_back(max(nums[0],nums[1]));
        for(int i = 2; i < nums.size(); ++ i){
            dp.push_back(max(nums[i] + dp[i - 2], dp[i - 1]));//转移方程
        }
        return dp.back();
    }
};