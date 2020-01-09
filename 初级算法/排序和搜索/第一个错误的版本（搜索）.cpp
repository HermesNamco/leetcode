// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        int high = n;
        int mid = n;
        bool flag;
        bool neighbor;
        while(true){
            flag = isBadVersion(mid);
            if(flag == true){
                neighbor = isBadVersion(mid - 1);
                if(neighbor == false)
                    break;
            }else{
                neighbor = isBadVersion(mid + 1);
                if(neighbor == true)
                    break;
            }
            if(flag == true)
                high = mid;
            else
                low = mid;
            mid = high*0.5 + low*0.5;       //二分搜索，时间复杂度O（log2（N））
            
        }
        if(flag == true)
            return mid;
        else
            return mid + 1;
    }
};