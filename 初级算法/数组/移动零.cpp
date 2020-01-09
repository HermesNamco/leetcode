class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int>::iterator pos = nums.begin();
        while(pos != nums.end()){
            if(*pos == 0){
                ++count;
                pos = nums.erase(pos);
            }else
                ++pos;
            
        }
        for(;count>0;--count)
            nums.push_back(0);
    }
};