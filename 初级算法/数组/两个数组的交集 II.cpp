class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::iterator pos1 = nums1.begin();
        vector<int> result;
        while(pos1 != nums1.end()){
            for(int i = 0;i < nums2.size();++ i){
                if(*pos1 == nums2[i]){
                    result.push_back(nums2[i]);
                    nums2.erase(nums2.begin() + i);
                    break;
                }
            }
            ++ pos1; 
        }
        return result; //忘记判空，但未影响结果
    }
};