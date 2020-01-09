#include <math.h>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> result;
        transToBin(n, result);
        uint64_t m = 0;
        transToInt(m, result);
        return m;
        
    }
    
    void transToBin(uint32_t num, vector<int> &result){
        while(num != 0){
            uint32_t temp = (uint64_t) num % 2;
            result.push_back(temp);
            num = num / 2;
        }
        while(result.size() != 32){
            result.push_back(0);
        }
    }
    
    void transToInt(uint64_t &m , vector<int> result){
        vector<int>::iterator pos = result.end() - 1;
        int power = 0;
        while(pos != result.begin() - 1){
            m = m + (*pos) * pow(2,power);
            ++ power;
            -- pos;
        }
    }
};