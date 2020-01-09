class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1) 
            return false;
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){//判断是否重复
                return true;
            }
            // 或者：m.insert({nums[i],i}); 插入元素
            ++m[nums[i]];   //若不重复则加入map中

           }
           return false;
    }
};