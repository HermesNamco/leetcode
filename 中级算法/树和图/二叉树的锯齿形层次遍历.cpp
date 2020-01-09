/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {	//基础还是广度优先遍历
        
        vector<vector<int>> result;

        bool flag = false;
        
        if(root == NULL)
            return result;
        
        queue<TreeNode*> btree;
        btree.push(root);
        
        vector<int> temp;
        
        while(!btree.empty()){
            int size = btree.size();
            for(int i = 0;i < size;++ i){		//同一层的节点数
                TreeNode* node = btree.front();
                btree.pop();
                temp.push_back(node -> val);

                if(node -> left)
                    btree.push(node -> left);
                if(node -> right)
                    btree.push(node -> right);
            }
            
            if(flag)
                reverse(temp.begin(),temp.end());
            

            flag = !flag;
            result.push_back(temp);
            temp.clear();

        }
        return result;
    }
};