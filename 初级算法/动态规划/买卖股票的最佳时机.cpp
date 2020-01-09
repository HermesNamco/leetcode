class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int sell = 0;
        vector<int>::iterator pos = prices.begin();
        while(pos != prices.end()){
            buy =  min(buy, *pos);              //�����滻��Сֵ       //min����ȡ���������е�Сֵ,max����ȡ���������еĴ�ֵ
            sell = max(sell, *pos - buy);       //sellֵ�����滻Ϊ���������sellֵ
            ++ pos;                             //�����ƶ�posָ�룬�����������ʱ��������ʱ��֮ǰ�����
        }
        return sell;
        
    }
};