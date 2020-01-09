class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {		//O(n2)复杂度勉强通过，先排序再用双向指针遍历
        sort(nums.begin(),nums.end());
        vector< vector<int> > result;
        for(int i = 0 ; i < nums.size(); ++ i){
            if(nums[i] > 0)
                break;
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int target = 0 - nums[i];
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[j] + nums[k] == target){
                    result.push_back({nums[i],nums[j],nums[k]});
                    while(j < k && nums[j] == nums[j + 1]) ++j;
                    while(j < k && nums[k] == nums[k - 1]) --k;
                    ++ j;
                    -- k;
                }else{
                    if(nums[j] + nums[k] > target)
                        --k;
                    else
                        ++j;
                }
            }                                    
        }
        return result;
    }
};