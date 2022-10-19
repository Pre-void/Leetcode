//
// Created by 13016 on 2022/10/19.
//

#include "vector"
#include "iostream"
using namespace std;


struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode():val(0),left(nullptr),right(nullptr){};
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
    TreeNode(int x,TreeNode * left,TreeNode * right):val(x),left(left),right(right){};
};


/**最笨的方法，先序遍历一遍树，存到数组中，然后遍历数组，串起来
 *
 * 边界条件判断，空树时，直接return
 *            只有一个根节点就返回一个与跟节点相同的节点
 *            节点数量大于2时，遍历

class Solution {
public:
    void flatten(TreeNode* root) {
        vector<TreeNode *> vi;
        preorderTraversal(root,vi);
        vector<TreeNode *>::iterator it;
        TreeNode * prev,* later;
        if (vi.empty()){
            return;
        } else if (vi.size()==1){
            prev = root;
            prev->left = nullptr;
            prev->right = nullptr;
        } else{
//            for (it = vi.begin()+1; it != vi.end(); it++) {
//                prev = *(it-1);
//                later = *it;
//                prev->left = nullptr;
//                prev->right = later;
//            }
            prev = vi.front();
            for (it = vi.begin()+1; it != vi.end(); it++) {
                prev->left = nullptr;
                prev->right = *it;
                prev = prev->right;
            }

        }
    }

    void preorderTraversal(TreeNode * root,vector<TreeNode *> & vi){
        if (!root){
            return;
        }
        vi.push_back(root);
        preorderTraversal(root->left,vi);
        preorderTraversal(root->right,vi);
    }
};
 **/


/**使用递归，使用递归就是假定他已经帮我们完成了任务，所以直接flatten(root->left)  faltten(right),他自己会把左右子树展开的，不需要考虑那么多
 * 接下来就是将左右展开的串起来**/
class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        flatten(root->left);
        TreeNode * right = root->right;
        root->right = root->left;
        root->left == nullptr;
        while (root->right){   /**我是脑残   !root->right和root->right分不清**/
            root = root->right;
        }
        flatten(root->right);
        root->right = right;
    }
};
