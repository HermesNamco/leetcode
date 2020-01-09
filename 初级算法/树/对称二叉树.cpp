class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        bool result = isTreeSymmetric(root->left ,root->right);
        return result;
    }
    bool isTreeSymmetric(TreeNode* lroot ,TreeNode* rroot){
        if(lroot == NULL && rroot == NULL)
            return true;
        if(lroot == NULL)
            return false;
        if(rroot == NULL)
            return false;
        bool result = (lroot->val == rroot->val);
        return result && isTreeSymmetric(lroot->left ,rroot->right) && isTreeSymmetric(rroot->left ,lroot->right);
    }
};