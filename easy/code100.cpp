//
// Created by 13016 on 2022/10/13.
//

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode() : val(0),left(nullptr),right(nullptr) {};
    TreeNode(int x) : val(x),left(nullptr),right(nullptr) {};
    TreeNode(int x,TreeNode * left ,TreeNode * right) : val(x),left(left),right(right) {};
};

/**深度优先遍历，在遍历的过程中比较，共有一下四种情况：
 * 1、若p q都为空指针则代表相同即都没有，返回true
 * 2、若p q某一个为空指针另一个不是，则代表不相同，返回false
 * 3、若p q的值不相等，则代表不相同，返回false
 * 4、若p q的值相同，则继续遍历其左右子节点，返回其结果。**/
class Solution{
public:
    bool isSameTree(TreeNode *p,TreeNode *q){
        if(!p && !q){
            return true;
        } else if(!p || !q){
            return false;
        } else if(p->val!=q->val){
            return false;
        } else{
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
    }
};