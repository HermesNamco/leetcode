class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] elements = new int[2];
        int temp = 0;
        for(int i = 0; i < nums.length - 1 ; i++)
            for(int j = i+1; j < nums.length; j++){
                temp = nums[i] + nums[j];
                if(temp == target){
                    elements[0] = i;
                    elements[1] = j;
                }
            }
     return elements;   
    }
}