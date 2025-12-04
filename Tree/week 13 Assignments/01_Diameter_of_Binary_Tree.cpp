// 543. Diameter of Binary Tree

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

    int findHieght(TreeNode* root)
    {
        if( root == NULL  )
        {
            return 0;
        }
        int left = findHieght(root->left);
        int right = findHieght(root->right);
        int ans = max(left,right) + 1;
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if( root == NULL )
        {
            return 0;
        }

        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = findHieght(root->left) + findHieght(root->right);

        int ans = max(option1,max(option2,option3));
        return ans;
    }
};






