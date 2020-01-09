class Solution {
    public int removeDuplicates(int[] nums) {
        int pos = 0;
        int length = 1;
        if(nums.length == 0)
            return 0;
        for(int i = 0; i < nums.length ;i ++){
            if(nums[pos] == nums[i])
                continue;
            else{
                length ++;
                pos++;
                nums[pos] = nums[i];
            }
            
        }
        return length;
    }
}