class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxPower = (int) pow(3,(int)(log(INT_MAX)/log(3)));  //如果一个数是3的幂，则这个数一定是比他更大的3的幂的因数
        if(n <= 0)
            return false;
        int result = maxPower % n;
        //cout << result << endl;
        if(result == 0)
            return true;
        return false;
    }
};