class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() <= 1)
            return true;
        
        int flag = nums[0];		//染色法，标记最远染色距离，遍历一遍即可
        
        for(int i = 0;i < nums.size(); ++ i){
            if(i > flag )
                return false;
            int temp = i + nums[i];
            flag = flag > temp ? flag : temp;
        }
        if(flag >= nums.size() - 1)
            return true;
        else
            return false;
    }
};