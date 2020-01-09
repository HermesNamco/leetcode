class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        if(nums.size() <= 1)
            return result;
        vector<int>::iterator pos1 = nums.begin();
        vector<int>::iterator pos2 = nums.begin() + 1;
        while(pos1 != nums.end()){
            while(pos2 != nums.end()){
                if( *pos1 + *pos2 == target){
                    result.push_back(pos1-nums.begin());
                    result.push_back(pos2-nums.begin());
                    return result;
                }else
                    ++ pos2;
            }
            ++ pos1;
            pos2 = pos1 + 1;
        }
        return result;
    }
};