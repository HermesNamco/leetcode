class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1)
            return false;
        vector<int>::iterator pos = nums.begin();
        while((pos-1) != nums.end()){
            for(int i = 1; i <= nums.end()-pos; ++i){
                if(*pos == *(pos + i))
                    return true;
            }
            ++ pos;
        }
        return false;
    }
};//执行时间太长，不知为什么[3,1]输入在leetcode上无法通过