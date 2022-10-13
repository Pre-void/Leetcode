//
// Created by 13016 on 2022/10/11.
//

/**二叉树中序遍历**/
#include "iostream"
#include "vector"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0),left(nullptr),right(nullptr) {};
    TreeNode(int x) : val(x),left(nullptr),right(nullptr) {};
    TreeNode(int x,TreeNode *left,TreeNode *right) : val(x),left(left),right(right) {};
};

class Solution {
public:

    void inorder(TreeNode * root,vector<int> & nums){
        if (!root){
            return;
        }
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vi;
        inorder(root,vi);
        return vi;

    }
};


int main(){
    int element = 0;
    TreeNode * root;
    vector<int> vi,result;
    char end;


    while(cin >> element){
        vi.push_back(element);
        cin.get(end);
        if (end!=' '){
            break;
        }
    }

    Solution * solution = new Solution();

    result = solution->inorderTraversal(root);




}