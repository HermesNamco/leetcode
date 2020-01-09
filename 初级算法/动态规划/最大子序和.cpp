class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        int minusFlag = 0;
        int minusSum = INT_MIN;
        vector<int>::iterator pos = nums.begin();
        while(pos != nums.end()){
            sum = max(0 , sum + *pos);          //在nums中存在正数的情况下，这样累计计算
            if(maxSum < sum)
                maxSum = sum;
            if(*pos < 0 && !minusFlag)
                minusSum = max(minusSum , *pos );//在nums中不存在正数的情况下，取最大的负数
            else                                //本算法复杂度为O（n），可采用更精妙的分治法
                minusFlag = 1;
            ++ pos;
        }
        if(!minusFlag)
            return minusSum;
        return maxSum;
    }
};