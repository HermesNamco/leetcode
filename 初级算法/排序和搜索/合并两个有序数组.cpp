class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>::iterator pos1 = nums1.begin();
        vector<int>::iterator pos2 = nums2.begin();
        int t = 0;
        while(pos2 != nums2.end()){             //双循环插入排序，时间复杂度为O（n^2）
            pos1 = nums1.begin();
            for(int i = 0; i < m + t; ++ i){
                if((*pos2) <= (*pos1))
                    break;
                ++ pos1;
            }
            nums1.insert(pos1 ,(*pos2));
            ++ pos2;
            ++ t;
        }
        pos1 = nums1.begin() + m + n;
        while(pos1 != nums1.end()){
            nums1.pop_back(); 
        }
    }
};