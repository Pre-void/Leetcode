//
// Created by 13016 on 2022/10/16.
//
#include "iostream"
#include "queue"
using namespace std;

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode():val(0),left(nullptr),right(nullptr){};
    TreeNode(int x): val(x),left(nullptr),right(nullptr){};
    TreeNode(int x,TreeNode * left,TreeNode * right): val(x),left(left),right(right){};
};

/**深度优先，
 * 1、若当前点为空节点，则说明该条路径和不为targetSum，返回false
 * 2、若当前节点的左右子节点都为空说明这条路径到头了，若当前的targetSum等于节点的值说明存在路径和满足targetSum
 * 3、若不满足上述情况，递归左右子节点
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        else if (!root->left&&!root->right){
            return targetSum==root->val;
        } else{
            return hasPathSum(root->left,targetSum-root->val)||
                    hasPathSum(root->right,targetSum-root->val);
        }
    }
};
 **/
/**我是傻逼  写的什么臭逼
 * 层次遍历
 * 1、根节点为空，返回false
 * 2、只有一个根节点，其值与targetSum相等，返回 true
 * 3、进入层次遍历，初始化两个队列，一个存点一个存从根节点到该点的路径和
 *    a)若左子节点不为空，计算到左子节点的路径和，若值与targetSum相等且左子节点为根节点返回true，否则将左子节点与其值加入queue1与queue2
 *    b)同a，不过针对右子节点
class Solution{
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        if ((root->val==targetSum)&&(!root->left)&&(!root->right)) return true;
        queue<TreeNode *> queue1;
        queue<int> queue2;
        queue1.push(root);
        queue2.push(root->val);
        while (!queue1.empty()){
            int size = queue1.size();
            int left = 0,right = 0;
            while (size>0){
                TreeNode * node = queue1.front();
                queue1.pop();
                int value = queue2.front();
                queue2.pop();
                if (node->left){
                    left = value+node->left->val;
                    if (left==targetSum&&!node->left->left&&!node->left->right) return true;
                    else queue1.push(node->left); queue2.push(left);
                }
                if (node->right){
                    right = value+node->right->val;
                    if (right==targetSum&&!node->right->left&&!node->right->right) return true;
                    else queue1.push(node->right); queue2.push(right);
                }
                size--;
            }
        }
        return false;
    }
};
 **/
/**根据官方题解改进的层次遍历，上一个方法的三种情况的判别统一起来**/
class Solution{
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        queue<TreeNode *> queue1;
        queue<int> queue2;
        queue1.push(root);
        queue2.push(root->val);
        while (!queue1.empty()){
            int size = queue1.size();
            int left = 0,right = 0;
            while (size>0){
                TreeNode * node = queue1.front();
                queue1.pop();
                int value = queue2.front();
                queue2.pop();
                if (!node->left&&!node->right&&value==targetSum){
                    return true;
                }
                if (node->left){
                    left = value+node->left->val;
                    queue1.push(node->left); queue2.push(left);
                }
                if (node->right){
                    right = value+node->right->val;
                    queue1.push(node->right); queue2.push(right);
                }
                size--;
            }
        }
        return false;
    }
};
