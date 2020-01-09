class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        vector<int>::iterator pos = prices.begin();
        int profit = 0;
        while((pos+1) != prices.end()){
            if(*pos < *(pos+1)){
                profit = profit + *(pos+1) - *pos;
                ++ pos;
            }else
                ++ pos;
        }
        return profit;
    }
};