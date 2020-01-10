class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result = -1;
        for(auto s : nums){
            if(s != result + 1)
                break;
            result = s;
        }
        return result + 1;
    }
};