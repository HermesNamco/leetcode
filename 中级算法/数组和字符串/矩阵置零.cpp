/*
����һ�� m x n �ľ������һ��Ԫ��Ϊ 0�����������к��е�����Ԫ�ض���Ϊ 0����ʹ��ԭ���㷨��

ʾ�� 1:

����: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
���: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
ʾ�� 2:

����: 
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
���: 
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {		//����ԭ���㷨��ʹ����O��m+n���Ķ���ռ�
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