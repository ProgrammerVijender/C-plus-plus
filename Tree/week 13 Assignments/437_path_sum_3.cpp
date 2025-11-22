// class Solution {
// public:

//     int sol(TreeNode* root , long long targetSum)
//     {
//         if(!root)
//         {
//             return 0;
//         }
//         int count = 0;
//         if(targetSum == root->val)
//         {
//             count++;
//         }
        
//         count += sol(root ->left , targetSum - root->val);
//         count += sol(root ->right , targetSum - root->val);
        

//         return count;
//     }
//     int pathSum(TreeNode* root, int targetSum) {
        
//         if(!root)
//         {
//             return 0;
//         }

//         int ans  = 0;

//         ans = sol(root ,  (long long)targetSum);
//         ans += pathSum(root->left , (long long)targetSum);
//         ans += pathSum(root->right ,  (long long)targetSum);

//         return ans;
//     }
// };