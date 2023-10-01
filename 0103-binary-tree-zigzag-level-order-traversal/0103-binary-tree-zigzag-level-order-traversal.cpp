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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        bool flag = true;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> level(size);
            for(int i =0 ;i<size; i++)
            {
                TreeNode * temp = q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                int index = flag ? i : (size-i-1);
                level[index] = temp->val;

            //instead of reversing and taking higher complexity, u can just do the above two steps
                // level.push_back(temp->val);
                // if(flag==1)
                //     reverse(level.begin(), level.end());
            }
            flag = !flag;
            ans.push_back(level);
        }
        return ans;
    }
};