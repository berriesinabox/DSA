/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int recursion(TreeNode* root){
        if(root == NULL) return 0;

        int sum=0;

        if(root->left && root->left->left == NULL && root->left->right ==NULL){
            sum += root->left->val;
        }

        sum += recursion(root->left);
        sum += recursion(root->right);

        return sum;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return recursion(root);
    }
};
