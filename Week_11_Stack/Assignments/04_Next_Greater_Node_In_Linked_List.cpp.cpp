// leetcode 1019. Next Greater Node In Linked List

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int> v;
        ListNode* temp = head;
        stack<int> st;

        while(temp != NULL)
        {
            v.push_back(temp -> val);
            temp = temp -> next;
        }

        for(int i=0; i<v.size(); i++)
        {
            // not empty stack 
            while(!st.empty() && v[i] > v[st.top()])
            {
                v[st.top()] = v[i];
                st.pop();
                
            }
            st.push(i);
        }

        // jaha same badi value hit karengi 
        while(!st.empty())
        {
            v[st.top()] = 0;
            st.pop();
        }


        return v;
    }
};
