class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxPower = (int) pow(3,(int)(log(INT_MAX)/log(3)));  //���һ������3���ݣ��������һ���Ǳ��������3���ݵ�����
        if(n <= 0)
            return false;
        int result = maxPower % n;
        //cout << result << endl;
        if(result == 0)
            return true;
        return false;
    }
};