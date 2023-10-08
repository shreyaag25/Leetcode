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

    TreeNode* inorder(TreeNode *root, int k, int &cnt)
    {
        if(root == NULL)
            return NULL;
        TreeNode *temp = inorder(root->left,k , cnt);
        if(temp)
            return temp;
        cnt++;
        if(cnt == k)
            return root;
        return inorder(root->right, k, cnt);
    }

    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL)
            return -1;
        int cnt = 0;
        TreeNode* ans = inorder(root, k, cnt);
        if(ans == NULL)
            return -1;
        return ans->val;
    }
};