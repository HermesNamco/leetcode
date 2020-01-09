class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count = 0;
        long long number = 0;
        vector<int>::reverse_iterator rpos = digits.rbegin();
        vector<int> result;
        while(rpos != digits.rend()){
            number = number + (*rpos)*pow(10,count);
            ++rpos;
            ++count;
        }
        ++ number;
        while(number > 0){
            result.push_back(number%10);
            number = number/10;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
//妄图把vector转成int再加一，发现long long类也不够大