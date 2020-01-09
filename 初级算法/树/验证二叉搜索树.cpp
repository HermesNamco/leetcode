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
    bool isValidBST(TreeNode* root) {
        vector<TreeNode*> tree;
        vector<TreeNode*>::iterator pos;
        vector<TreeNode*>::iterator next;
        preOrder(root ,tree);		//把树转换成数组，验证是否从小到大排序
        if(tree.empty())
            return true;
        pos = tree.begin();
        next = tree.begin() + 1;
        while(next != tree.end()){
            if((*next)->val <= (*pos)->val)
                return false;
            ++ pos;
            ++ next;
        }
        return true;
        
        
    }
    void preOrder(TreeNode* node,vector<TreeNode*> &tree){
        if(node == NULL)
            return;
        preOrder(node->left, tree);
        tree.push_back(node);
        preOrder(node->right,tree);
        return;
    }
};