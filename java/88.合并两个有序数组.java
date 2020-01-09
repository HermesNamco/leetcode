class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int temp;
        int i = 0;
        int j = 0;
        if(m == 0){
            for(i = 0;i < n;i ++)
                nums1[i] = nums2[i];
            return;
        }
        if(n == 0)
            return;
        for(i = m;i < nums1.length;i ++)
            nums1[i] = 2147483647;
        i = 0;
        while(true){
            if(nums1[i] < nums2[j])
                i ++;
            else{
                back(nums1 , i);
                nums1[i] = nums2[j];
                i ++;
                j ++;
            }
            if(j >= n)
                break;
            if(i >= nums1.length)
                break;
        }
    }
    
    public int[] back(int[] nums,int pos){
        int temp = 0;
        int pre = 0;
        for(int i = pos;i < nums.length;i ++){
            temp = nums[i];
            nums[i] = pre;
            pre = temp;
        }
        return nums;
    }
}