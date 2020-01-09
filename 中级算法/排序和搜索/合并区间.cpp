class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {		//先排序后合并
        
        if(intervals.size() <= 1)
            return intervals;
        
        sort(intervals.begin(),intervals.end(),cmp);
        
        vector<vector<int>>::iterator pos = intervals.begin();
        int start = (*pos)[0];
        int end = (*pos)[1];
        ++pos;
        vector<vector<int>> result;
        
        while(pos != intervals.end()){
            int s = (*pos)[0];
            int e = (*pos)[1];
            if(s <= end)
                end = max(end,e);
            else{
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                result.push_back(temp);
                start = s;
                end = e;
            }
            ++pos;
        }
        
        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end);
        result.push_back(temp);
        
        return result;
    }
    
    static bool cmp(const vector<int>& a, const vector<int>& b){	//这是重点
        if(a[0] != b[0])
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }
};