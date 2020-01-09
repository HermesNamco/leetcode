class Solution {
public:
    int uniquePaths(int m, int n) {		// 该问题的解为C下（n + m - 2）上(m - 1)的数学问题

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