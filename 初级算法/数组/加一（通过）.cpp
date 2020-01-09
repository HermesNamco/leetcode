class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::iterator pos = digits.end();
        pos = pos - 1;
        *pos = *pos + 1;
        while(* pos == 10){
            if(pos == digits.begin()){
                *pos = 0;
                digits.insert(digits.begin(),1);
                break;
            }
            *pos = 0;
            pos = pos - 1;
            *pos = *pos + 1;
        }
        return digits;
    }
};