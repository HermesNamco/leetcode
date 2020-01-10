class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        int count = 0;
        int pos = -1;
        vector<int> output(nums.size(),0);
        for(int i = 0;i < nums.size();++ i){
            if(nums[i] == 0){
                ++ count;
                pos = i;
                continue;
            }
            sum = sum * nums[i];
        }
        if(count > 1)
            return output;
        else if(count == 1){
            output[pos] = sum;
            return output;
        }
        for(int i = 0;i < output.size();++ i){
            output[i] = sum / nums[i];			//用了除法
        }
        return output;
    }
};