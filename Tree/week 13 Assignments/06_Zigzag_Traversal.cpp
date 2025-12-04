// class Solution {
// public:

//     // void Traverse(TreeNode* root,vector<vector<int>> ans)
//     // {
//     //     if(root == NULL)
//     //     {
//     //         return;
//     //     }
//     //     queue <TreeNode*> q;
//     //     q.push(root);
//     //     TreeNode* temp = q.front();
//     //     q.pop();

//     //     // if()
//     // }

//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        vector<vector<int>> ans;
//     //    Traverse(root,ans);
//     // ans.push_back({3});
//     // ans.push_back({9,20});
//     // ans.push_back({7,15});


//         if(root == NULL)
//         {
//             return ans;
//         }

//         bool zigzagPostion = 1;
//         vector<int> v;
//         queue <TreeNode*> q;

//         TreeNode* t =  root; 
//         q.push(t);
//         q.push(NULL);

//         while(!q.empty())
//         {
//         TreeNode* temp = q.front();  q.pop();

//             if(temp == NULL)
//             {   zigzagPostion = !zigzagPostion;
//                 if(zigzagPostion){
//                     reverse(v.begin(),v.end());
//                     }

//                 ans.push_back(v);
//                 v.erase(v.begin(),v.end());
//                 if(!q.empty()) 
//                 {
//                     q.push(NULL);
//                 }
//             }
//             else
//             {
//                 v.push_back(temp->val);

//                 if(temp->left != NULL)
//                 {
//                     q.push(temp->left);
//                 }
                
//                 if(temp->right != NULL)
//                 {
//                     q.push(temp->right);
//                 }

//             }
//         }


//        return ans; 
//     }
// };
