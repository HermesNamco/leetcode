class Solution {
public:
    int uniquePaths(int m, int n) {		// ������Ľ�ΪC�£�n + m - 2����(m - 1)����ѧ����

        //int64_t dem = 1;
        int64_t result = 1;
        if (m < n){
            int temp = n;
            n = m;
            m = temp;
        }
        for(int i = 1 ; i <= n - 1; ++ i){
            result = result * (n + m - 1 - i);
            
            result = result / i;
        }
        return result;
    }
};