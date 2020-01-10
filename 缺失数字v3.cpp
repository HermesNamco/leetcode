class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = -1;
        int sum = 0;
        int trueSum = 0;
        bool flag = false;
        for(auto s : nums){
            if(s == 0)
                flag = true;
            if(max < s)
                max = s;
            sum = sum + s;
        }
        trueSum = (1 + max) * max / 2;		// 由题目特殊性用前n项和公式减去数组和可得到中间缺失的数字
        if(trueSum == sum){					// 如果两者和一致，则存在两种可能，一种缺失0，一种缺失max + 1
            if(flag)
                return max + 1;
            else
                return 0;
        }
        else
            return trueSum - sum;
    }
};