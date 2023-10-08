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
public:
    bool isValid(TreeNode *root, TreeNode * left, TreeNode * right)
    {
        if(root == NULL)
            return true;
        if((left && root->val <= left ->val)|| (right && root->val >= right->val))
            return false;
        return isValid(root->left, left, root) && isValid(root->right, root, right);
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root, NULL, NULL);
    }
};