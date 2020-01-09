class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        vector<int> temp;
        vector<int> falseAnswer;
        falseAnswer.push_back(-1);
        falseAnswer.push_back(-1);
        for(int i = 0;i < nums.size(); ++ i){
            if(nums[i] == target)
                temp.push_back(i);
            if(!temp.empty() && nums[i] != target)
                break;
        }
        if(temp.empty())
            return falseAnswer;
        result.push_back(*temp.begin());
        result.push_back(*(temp.end() - 1));
        return result;
    }
};