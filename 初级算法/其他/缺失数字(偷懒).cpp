/*
给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数。

示例 1:

输入: [3,0,1]
输出: 2

示例 2:

输入: [9,6,4,2,3,5,7,0,1]
输出: 8

*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        list<int> tempList;
        
        tempList.assign(nums.begin(),nums.end());
        tempList.sort();			//未实现排序算法，直接使用list自带的快速排序
        list<int>::iterator pos = tempList.begin();
        list<int>::iterator tempPos = ++tempList.begin();
        
        for(pos; tempPos != tempList.end(); pos++,tempPos++){ //查找缺失的数字
            cout << *tempPos << endl;
            cout << *pos << endl;
            if(*tempPos - *pos != 1)
                return *pos + 1;
        }
        if(tempList.front() != 0)
            return 0;
        else
            return *(--tempList.end()) + 1;       
        
    }
};