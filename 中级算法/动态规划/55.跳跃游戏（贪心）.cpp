class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() <= 1)
            return true;
        
        int flag = nums[0];		//Ⱦɫ���������ԶȾɫ���룬����һ�鼴��
        
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