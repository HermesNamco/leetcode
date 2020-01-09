class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        int minusFlag = 0;
        int minusSum = INT_MIN;
        vector<int>::iterator pos = nums.begin();
        while(pos != nums.end()){
            sum = max(0 , sum + *pos);          //��nums�д�������������£������ۼƼ���
            if(maxSum < sum)
                maxSum = sum;
            if(*pos < 0 && !minusFlag)
                minusSum = max(minusSum , *pos );//��nums�в���������������£�ȡ���ĸ���
            else                                //���㷨���Ӷ�ΪO��n�����ɲ��ø�����ķ��η�
                minusFlag = 1;
            ++ pos;
        }
        if(!minusFlag)
            return minusSum;
        return maxSum;
    }
};