//
// Created by 13016 on 2022/10/13.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(nullptr),right(nullptr) {};
    TreeNode(int x):val(x),left(nullptr),right(nullptr) {};
    TreeNode(int x,TreeNode * left,TreeNode * right):val(x),left(left),right(right) {};
};

/**大致同题100，因为是判断对称，所以最后p q指针的指向也对称**/
class Solution{
public:

    bool check(TreeNode * p,TreeNode * q){
        if(!p && !q){
            return true;
        } else if(!p || !q){
            return false;
        } else if(p->val!=q->val){
            return false;
        } else {
            return check(p->left,q->right)&& check(p->right,q->left);
        }
    }

    bool isSymmetric(TreeNode * root){
        return check(root,root);
    }
};