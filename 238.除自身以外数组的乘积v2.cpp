class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {		//不用除法版，分别计算左右乘积
        int mul = 1;
        vector<int> output(nums.size(),0);
        for(int i = 0;i < nums.size() - 1;++ i){
            mul = mul * nums[i];
            output[i + 1] = mul;
        }
        mul = 1;
        for(int i = nums.size() - 1; i > 0; --i){
           mul = mul * nums[i];
           output[i - 1] = mul * output[i - 1];
        }
        output[0] = mul;
        return output;
    }
};