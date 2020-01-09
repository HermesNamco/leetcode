/*
给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。

示例 1:

输入: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
示例 2:

输入: 
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
输出: 
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {		//并非原地算法，使用了O（m+n）的额外空间
        vector<int> row(matrix.size(),1);
        vector<int> column(matrix[0].size(),1);
        for(int k = 0;k < matrix.size(); ++ k){
            for(int i = 0,j = matrix[k].size() - 1;i <= j; ++ i, -- j){
                if(matrix[k][i] == 0){
                    column[i] = 0;
                    row[k] = 0;
                }
                if(matrix[k][j] == 0){
                    column[j] = 0;
                    row[k] = 0;
                }
            }
        }
        for(int k = 0;k < matrix.size(); ++ k){
            for(int i = 0,j = matrix[k].size() - 1;i <= j; ++ i, -- j){
                matrix[k][i] = matrix[k][i] * row[k] * column[i];
                matrix[k][j] = matrix[k][j] * row[k] * column[j];
            }
        }
    }
};