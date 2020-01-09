class Solution {
    int flag = 0;
    public boolean isSymmetric(TreeNode root) {
        if(root == null)
            return true;
        preOrderTraverse(root.left, root.right);
        if(flag == 1)
            return false;
        return true;
    }
    
    public void preOrderTraverse(TreeNode p, TreeNode q){
        if(p == null && q == null)
            return;
        if(p == null && q != null){
            flag = 1;
            return;
        }
        if(p != null && q == null){
            flag = 1;
            return;
        }
        if(p.val != q.val)
            flag = 1;
        preOrderTraverse(p.left, q.right); 
        preOrderTraverse(p.right, q.left);
        
    }
}