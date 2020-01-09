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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL)
            return result;
        int count = 0;
        queue<TreeNode*> treeQueue;
        treeQueue.push(root);
        while(!treeQueue.empty()){
            count = treeQueue.size();
            vector<int> temp;
            while( count --){				//不能使用-- count，应该先判断，再自减
                TreeNode* node = treeQueue.front();
                treeQueue.pop();
                temp.push_back(node->val);
                if(node->left)
                    treeQueue.push(node->left);
                if(node->right)
                    treeQueue.push(node->right);
            }
            result.push_back(temp);
        }
        return result;
    }
};