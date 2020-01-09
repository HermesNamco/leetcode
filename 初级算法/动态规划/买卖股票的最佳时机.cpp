class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int sell = 0;
        vector<int>::iterator pos = prices.begin();
        while(pos != prices.end()){
            buy =  min(buy, *pos);              //不断替换最小值       //min函数取两个参数中的小值,max函数取两个参数中的大值
            sell = max(sell, *pos - buy);       //sell值不断替换为更大利润的sell值
            ++ pos;                             //单向移动pos指针，不会出现卖出时间在买入时间之前的情况
        }
        return sell;
        
    }
};