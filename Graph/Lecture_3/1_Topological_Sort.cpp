#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
#include <stack>

using namespace std;

class Graph{
    unordered_map<int, list<int>> adj;
    stack<int> st;


public:
    void addEdge(int u, int v, bool direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed
       
        if(direction == 1){
            adj[u].push_back(v);
        }
        else{
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        cout<<endl;
        for(auto i: adj){
            cout<<"{ "<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<"} ";
            cout<<endl;
        }
    }

    void Topo_sort_DFS(int src , map<int, bool>& visited , stack<int>& st){
        
        visited[src] = true;

        for(auto nbr : adj[src])
        {
            if(!visited[nbr])
            {
                Topo_sort_DFS(nbr, visited , st);
            }

        }
        
        st.push(src);
    }

    void Topo_sort_BFS(){
        
        queue <int> q;
        map <int , int> indegree;

        for(auto i : adj)
        {
            for(auto j : i.second)
            {
                indegree[j]++;
            }
        }
        
        // for printing indegree
        for(auto i : indegree)
        {
            cout<<i.first<<"-->"<<i.second<<endl;
        }
    }
};


int main(){

    // Graph g;
    // g.addEdge(0, 1, 1);
    // g.addEdge(1, 2, 1);
    // g.addEdge(2, 3, 1);
    // g.addEdge(3, 4, 1);
    // g.addEdge(3, 5, 1);
    // g.addEdge(4, 6, 1);
    // g.addEdge(5, 6, 1);
    // g.addEdge(6, 7, 1);

    // g.printAdjList();

    // int n = 8; // number of nodes

    // map<int, bool> visited;
    // stack<int> st;

    // for(int node=0; node<n; node++){
    //     if(!visited[node]){
    //         g.Topo_sort_DFS(node, visited , st);
    //     }
    // }

    // cout<<"Topological Sort Order Using DFS: ";
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;


    
    
    
    // using BFS
    Graph g;
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(2, 4, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 5, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(5, 7, 1);

    cout<<"Topological Sort Order Using BFS:-";
    
    g.printAdjList();
    cout<<endl;

    g.Topo_sort_BFS();



    return 0;
}