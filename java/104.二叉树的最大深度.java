class Solution {
    
    public int maxDepth(TreeNode root) {
        int max = 0;
        if(root == null)
            return 0;
        max = preOrderTraverse(root, max);
        return max;
    }
    
    public int preOrderTraverse(TreeNode p, int max){
        int tempMax = 0;
        int tempMax2 = 0;
        if(p == null){
            return max;
        }
        max ++;
        tempMax = preOrderTraverse(p.left, max);  //二叉树递归遍历
        tempMax2 = preOrderTraverse(p.right, max);
        return tempMax > tempMax2 ? tempMax : tempMax2;
    }
}