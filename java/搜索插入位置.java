class Solution {
    public int searchInsert(int[] nums, int target) {
        int i = 0;
        if(nums.length == 0)
            return 0;
        for(i = 0; i < nums.length ; i++ ){
            if(nums[i] < target)
                continue;
            else 
                return i;
        }
        return i;
    }
}