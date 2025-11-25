#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph_without_weight {
    public:
        unordered_map<int,list <int> > adjList;

        void addEdge(int u, int v, bool direction) {
            // direction = 0 -> undirected
            // direction = 1 -> directed

            // create an edge from u to v
            if(direction == 1) {
                adjList[u].push_back(v);
            }
            else
            {
                
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }

            cout << "priting adj list" << endl;
            printAdjList();
            cout << endl;
        }
        
        void printAdjList() {
            for(auto i: adjList) {
                cout << i.first << " -> { ";
                for(auto j: i.second) {
                    cout << j << ", ";
                }
                cout << "}" << endl;
            }
        }

        bool checkCycle_Undirected_BFS(int src){
            queue <int> q;
            unordered_map <int,bool> visited;
            unordered_map <int,int> parent;
            
            // initial state
            q.push(src);
            visited[src] = true;
            parent[src] = -1;

            while(!q.empty()){
                int frontNode = q.front();
                q.pop();

                // traverse all nbrs of frontNode
                for(int nbr: adjList[frontNode]){
                    // not visited
                    if(!visited[nbr]){
                        q.push(nbr);
                        visited[nbr] = true;
                        parent[nbr] = frontNode;
                    }
                    // visited but not parent
                    else if(parent[frontNode] != nbr){
                        return true; // cycle found
                    }
                }
            }



        }
};



int main(){
    Graph_without_weight g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    g.addEdge(3,4,0);
    g.addEdge(2,5,0);

    bool isCyclePresent = g.checkCycle_Undirected_BFS();
    if(isCyclePresent) {
        cout << "Cycle is present in the graph" << endl;
    }
    else {
        cout << "Cycle is not present in the graph" << endl;
    }

    return 0;
}