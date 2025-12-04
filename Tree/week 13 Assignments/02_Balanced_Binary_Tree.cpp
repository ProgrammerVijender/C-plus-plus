// 110. Balanced Binary Tree

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

    int checkheight(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }

        int leftnode = checkheight(root->left);
        int rightnode = checkheight(root->right);

        int sum  = max(leftnode , rightnode ) + 1;
        return sum;
    }

    bool isBalanced(TreeNode* root) {
        
        // Base case
        if(root == NULL)
        {
            return true;
        }

        // currentNode - solve
        int leftnode = checkheight(root->left);
        int rightnode = checkheight(root->right);

        int diff = abs(leftnode - rightnode);
        cout<<diff;
        bool CurrentNode = (diff <= 1);

        bool lefty = isBalanced(root->left);
        bool righty = isBalanced(root->right);

        if(lefty && righty && CurrentNode)
        {
            return true;
        }

        return 0;
    }
};