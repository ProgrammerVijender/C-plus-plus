// leetcode 1047. Remove All Adjacent Duplicates In String

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         stack <char> st;
//         string ans = "";

//         for(char i:s)
//         {
//             if( !st.empty() && i == st.top())
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(i);
//             }

//         }

//         while(!st.empty())
//         {
//             ans +=st.top();
//             st.pop();
//         }

//         reverse(ans.begin() , ans.end());

//         return ans;
//     }
// };