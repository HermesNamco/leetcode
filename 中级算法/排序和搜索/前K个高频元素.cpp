class Solution {			//代码第一次没通过，第二次通过了
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        vector<int> frequence;
        vector<int> number;
        int flag = 0;
        int front;
        for(int i = 0; i < nums.size();++ i){
            if(front != nums[i]){
                front = nums[i];
                number.push_back(nums[i]);
                if(flag != 0)
                    frequence.push_back(flag);
                flag = 1;
            }else{
                ++ flag;
            }
        }
        frequence.push_back(flag);
        flag = 0;
        while(flag < k){
            int max = INT_MIN;
            int maxPos = 0;
            for(int i = 0;i < frequence.size();++ i){
                if(max < frequence[i]){
                    max = frequence[i];
                    maxPos = i;
                }
            }
            cout << max << "..." << maxPos << endl;
            result.push_back(number[maxPos]);
            ++ flag;
            frequence.erase(frequence.begin() + maxPos);
            number.erase(number.begin() + maxPos);
        }
        return result;
    }
};