class Solution {
    int flag = 0;
    public boolean isSameTree(TreeNode p, TreeNode q) {
        preOrderTraverse(p, q);
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
        preOrderTraverse(p.left, q.left);  //¶þ²æÊ÷µÝ¹é±éÀú
        preOrderTraverse(p.right, q.right);
        
    } 
}