
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 0)
            return 1;
        int result =(int) ((1.0/sqrt(5))*pow(0.5,n+1)*(pow(1+sqrt(5),n+1)-pow(1-sqrt(5),n+1)));     //쳲��������е�n+1����ʽ
        return result;
    }
};