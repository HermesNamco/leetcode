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
};//ִ��ʱ��̫������֪Ϊʲô[3,1]������leetcode���޷�ͨ��