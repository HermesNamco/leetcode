class Solution {
    public int removeElement(int[] nums, int val) {
        int pos = 0;
        int length = 0;
        if(nums.length == 0)
            return 0;
        for(int i = 0; i < nums.length ; i ++){
            if(nums[i] == val)
                continue;
            else{
                nums[pos] = nums[i];
                pos ++;
                length ++;
            }
        }
        return length;
    }
}