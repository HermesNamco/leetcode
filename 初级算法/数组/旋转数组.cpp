class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty() || nums.size() == 1)
            return;
        else if(k == 0)
            return;
        vector<int>::iterator temp;
        int tempInt = 0;
        for(int i = 0; i < k; ++i){
            temp = nums.end() - 1;
            tempInt = *temp;
            nums.pop_back();
            nums.insert(nums.begin(),tempInt);
        }
    }
};