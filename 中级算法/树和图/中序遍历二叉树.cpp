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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> result;
        
        if(root == NULL)
            return result;
        
        inorder(root, result);
        return result;
    }
    void inorder(TreeNode* p,vector<int>& result){	//中序遍历递归实现
        if(p -> left)
            inorder(p -> left, result);
        result.push_back(p -> val);
        if(p -> right)
            inorder(p -> right, result);
    }
};