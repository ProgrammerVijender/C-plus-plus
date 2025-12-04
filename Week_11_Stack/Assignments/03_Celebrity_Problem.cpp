class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack <int> st;
        
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i=0; i<m; i++)
        {
            st.push(i);
        }
        
        while(st.size() > 1)
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            if(mat[a][b] == 1) st.push(b);
            else st.push(a);
        }
        
        int cele = st.top();
        
        for(int i=0; i<n; i++)
        {
            if(mat[cele][i] != 0 && i != cele ) return -1;
        }
        
        for(int i=0; i<n; i++)
        {
            if( mat[i][cele]  == 0 && i != cele  ) return -1;
        }
        return cele;
    }
};