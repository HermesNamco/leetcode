class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        int tmp = 0;
        if(prices.length == 0)
            return 0;
        for(int i = 0;i < prices.length;i ++)
            for(int j = i;j < prices.length;j ++){
                tmp = prices[j] - prices[i];
                if( tmp > profit)
                    profit = tmp;
                else
                    continue;
            }
        return profit;
    }    
}