class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int pre = INT_MIN;
        int next;
        int now;
        if(nums.size() == 1)
            return 0;
        for(int i = 0;i < nums.size() - 1;++ i){
            next = nums[i + 1];
            now = nums[i];
            cout << now << next << endl;
            if(now >= pre && now >= next){
                return i;
            }
            next = now;
        }
        return nums.size() - 1;
    }
};