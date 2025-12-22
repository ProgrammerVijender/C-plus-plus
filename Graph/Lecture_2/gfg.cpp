// cycle check gfg problem using bfs :----

// class Solution {
//   public:

//     bool solve(int src, vector<vector<int>>& edges ,unordered_map<int , bool >& visited ) {
//         // Code here
        
//         unordered_map <int , int > parent;
//         queue<int> q;
//         // initial state
        
//         q.push(src)      ;
//         visited[src]  = true;
//         parent[src] = -1;
        
//         while(!q.empty())
//         {
//             int frontNode = q.front();  q.pop();
            
//             for(auto nbr:edges[frontNode])
//             {
//                 if(!visited[nbr])
//                 {
//                     q.push(nbr);
//                     visited[nbr] = true;
//                     parent[nbr] =  frontNode;
//                 }
//                 else if(visited[nbr] && parent[frontNode] != nbr)
//                 {
//                     return 1;
//                 }
//             }
//         }
//             return false;
//     }  
//     bool isCycle(int V, vector<vector<int>>& edges) 
//     {
//         unordered_map <int , bool > visited;
//         for(int i=0; i<V; i++)
//         {
//             if(!visited[i])
//             {
//                 bool ans = solve(i ,edges , visited);
                
//                 if(ans == true)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
        
//     }
// };


class Solution {
public:

    bool solve(int src,
               vector<vector<int>>& adj,
               unordered_map<int,bool>& visited) {

        unordered_map<int,int> parent;
        queue<int> q;

        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while (!q.empty()) {
            int frontNode = q.front();
            q.pop();

            for (auto nbr : adj[frontNode]) {
                if (!visited[nbr]) {
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                    q.push(nbr);
                }
                else if (parent[frontNode] != nbr) {
                    return true;   // cycle found
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        // 🔥 REQUIRED STEP
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        unordered_map<int,bool> visited;

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (solve(i, adj, visited))
                    return true;
            }
        }
        return false;
    }
};



// cycle check gfg problem using dfs :----



    // using dfs
    
    bool solutionUsingDFS(int src , unordered_map<int,bool>& vis , int parent,vector<vector<int>>& adj){
        vis[src] = true;
        
        for(auto nbr : adj[src])
        {
            if(!vis[nbr])
            {
                bool ans = solutionUsingDFS( nbr , vis , src , adj );
                
                if(ans) return true;
                
            }
            
            else if(vis[nbr] == 1 && nbr != parent)
            {
                    return 1;
            }
        }
            return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        unordered_map<int,bool> vis;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                int parent = -1;
                if (solutionUsingDFS(i, vis, parent, edges))
                    return true;
            }
        }
        return false;
    }
};