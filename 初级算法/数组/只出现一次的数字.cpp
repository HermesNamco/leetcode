class Solution {
public:
    int singleNumber(vector<int>& nums) {  
        unordered_map<int,int> m;
        for(int i = 0;i < nums.size(); i++){
            if(m.find(nums[i]) == m.end())  //  因为只有一个出现一次，所以最后m中只剩一个元素
                m.insert({nums[i],i});
            else
                m.erase(nums[i]);
        }
        return m.begin()->first;
    }
};