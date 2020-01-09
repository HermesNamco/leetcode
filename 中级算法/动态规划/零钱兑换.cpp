/*
贪心算法，存在错误
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int sum = 0;
        sort(coins.begin(),coins.end());
        while(!coins.empty()){
            int maxCoin = coins.back();
            coins.pop_back();
            int leftNum = amount % maxCoin;
            sum = sum + amount/maxCoin;
            amount = leftNum;
            if(leftNum == 0)
                return sum;
        }
        return -1;
    }
};
*/
//动态规划
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> cost(amount + 1, -1);
        cost[0] = 0;
        int minCost = INT_MAX;
        for(int i = 0;i <= amount; ++i){
            for(auto c : coins){
                if(i - c >= 0 && cost[i - c] != -1){
                    if(minCost >= cost[i - c] )
                        minCost = cost[i - c];
                }
            }
            if(minCost != INT_MAX)
                cost[i] = 1 + minCost;
            minCost = INT_MAX;
        }
        return cost[amount];
    }
};