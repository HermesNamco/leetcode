class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1) 
            return false;
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){//�ж��Ƿ��ظ�
                return true;
            }
            // ���ߣ�m.insert({nums[i],i}); ����Ԫ��
            ++m[nums[i]];   //�����ظ������map��

           }
           return false;
    }
};