class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int max = nums.size();
        vector<int>::iterator now = nums.begin();
        vector<int>::iterator compare = nums.begin();
        for(int i = 0 ;i < max ;i ++){
            now = nums.begin() + i;
            if(now == nums.end())
                break;
            compare = now + 1;
            while(compare != nums.end()){
                if(*now == *compare){
                    compare = nums.erase(compare);
                }
                else
                    ++compare;     
            }
        }
        return nums.size();
    }
};