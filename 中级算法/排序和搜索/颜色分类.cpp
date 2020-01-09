class Solution {
public:
    void sortColors(vector<int>& nums) {
        int flag = 1;
        int front = -1;
        while(flag != 0){		//原地排序，冒泡实现
            flag = 0;
            front = -1;
            for(int i = 0;i < nums.size(); ++ i){
                if(nums[i] < front){
                    nums[i - 1] = nums[i];
                    nums[i] = front;
                    flag = 1;
                }else
                    front = nums[i];
            }
        }
    }
};