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
    int cal(TreeNode *root, int &maxi)
    {
        if(root==NULL)
            return 0;
        int lh = cal(root->left, maxi);
        int rh = cal(root->right, maxi);
        maxi = max(maxi, lh+rh);
        return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = INT_MIN;
        int a = cal(root, maxi);
        return maxi;
    }
};