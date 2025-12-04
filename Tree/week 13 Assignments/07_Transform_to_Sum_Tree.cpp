
// class Solution {
//   public:

//     int sol(Node *node)
//     {
//         if(!node) return 0;
        
//         if(!node -> left && !node-> right)
//         {
//             int temp = node->data;
//             node->data = 0;
//             return temp;
//         }
        
//         int lsum = sol(node->left);
//         int rsum = sol(node->right);
        
//         int temp = node ->data;
        
//          node ->data = lsum +rsum;
        
//         return node ->data + temp;
//     }
//     // Convert a given tree to a tree where every node contains sum of values of
//     // nodes in left and right subtrees in the original tree
//     void toSumTree(Node *node) {
//         // Your code here
        
//          sol(node);
        
//     }
// };