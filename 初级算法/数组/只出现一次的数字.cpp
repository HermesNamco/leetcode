class Solution {
public:
    int singleNumber(vector<int>& nums) {  
        unordered_map<int,int> m;
        for(int i = 0;i < nums.size(); i++){
            if(m.find(nums[i]) == m.end())  //  ��Ϊֻ��һ������һ�Σ��������m��ֻʣһ��Ԫ��
                m.insert({nums[i],i});
            else
                m.erase(nums[i]);
        }
        return m.begin()->first;
    }
};