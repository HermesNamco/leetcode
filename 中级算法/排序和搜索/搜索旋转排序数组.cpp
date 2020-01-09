class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i;
        if(nums.size() == 0)
            return -1;
        if(target < nums[0]){		//�Ӻ���ǰ��
            i = nums.size() - 1;
            for(;i>=0; -- i){
                if(nums[i] == target)
                    return i;
                else if(nums[i] < target)
                    break;
            }
        }else if(nums[0] == target)
            return 0;
        else{				//��ǰ������
            i = 0;
            for(;i < nums.size(); ++ i){
                if(i != 0 && nums[i] < nums[i - 1])
                    break;
                if(nums[i] == target)
                    return i;
                else if(nums[i] > target)
                    break;
            }
        }
        
        
        return -1;
        
    }
};