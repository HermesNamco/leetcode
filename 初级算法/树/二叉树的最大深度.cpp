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
    int maxDepth(TreeNode* root) {
        int max = 0;
        //if(root == NULL)
        //    return 0;
        max = preOrder(root, max);
        return max;
    }
    int preOrder(TreeNode* node, int max){
        int tempMax = 0;
        int tempMax2 = 0;
        if(node == NULL){
            return max;
        }
        max ++;
        tempMax = preOrder(node->left, max);  //¶þ²æÊ÷µÝ¹é±éÀú
        tempMax2 = preOrder(node->right, max);
        return tempMax > tempMax2 ? tempMax : tempMax2;
    }
};