class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int smallNum = INT_MAX;
        int midNum = INT_MAX;
        
        
        for(int a : nums){
            if(smallNum >= a)
                smallNum = a;
            else if(midNum >= a)
                midNum = a;
            else
                return true;
        }
        
        return false;
    }


};