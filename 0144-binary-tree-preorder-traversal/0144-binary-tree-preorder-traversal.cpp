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
    void preOrder(TreeNode* root, vector<int> &ans)
    {
        if(root== NULL)
            return;
        ans.push_back(root->val);
        preOrder(root->left, ans);
        preOrder(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        //Recursive
        // vector<int> ans;
        // preOrder(root, ans);
        // return ans;


        //ITERATIVE

        vector<int> ans;
        stack<TreeNode *> s;
        if(root == NULL)
            return ans;
        s.push(root);
        while(!s.empty())
        {
            TreeNode *temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            if(temp->right)
                s.push(temp->right);
            if(temp->left)
                s.push(temp->left);
        }
        return ans;
    }
};