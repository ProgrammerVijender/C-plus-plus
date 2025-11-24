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
};

template<typename T>
class Graph_with_weight {
    public:
        unordered_map<T,list <pair <T,int> > > adjList;

        //wt is weight of edge
        void addEdge(T u, T v, int wt, bool direction) {
            // direction = 0 -> undirected
            // direction = 1 -> directed

            // create an edge from u to v
            if(direction == 1) {
                adjList[u].push_back(make_pair(v,wt));
            }
            else
            {
                
                adjList[u].push_back({v,wt});
                adjList[v].push_back({u,wt});
            }


            // cout << "priting adj list" << endl;
            // printAdjList();
            // cout << endl;
        }
        
        void printAdjList() {
            for(auto i: adjList) {
                cout << i.first << " -> { ";
                for(pair<T,T> p: i.second) {
                    cout << "(" <<p.first << "," << p.second << "), ";
                }
                cout << "}" << endl;
            }
        }
        
        void bfs_Traversal(T src) {
            
           // visited map
           unordered_map<T,bool> visited;
           queue<T> q;

           // initial state
              q.push(src);
              visited[src] = true; 
            
            while (!q.empty())
            {
                T frontNode = q.front();
                cout << frontNode << " ";
                q.pop();

                // traverse all nbrs of frontNode
                for(auto nbrPair: adjList[frontNode]) {
                    T nbrData = nbrPair.first;
                    
                    if(!visited[nbrData]) {
                        q.push(nbrData);
                        visited[nbrData] = true;
                    }
                }
            }
            
        }

        void dfs_Traversal(T src , unordered_map<T,bool> &vls)
        {
            vls[src] = true;
            cout << src << " ";

            // nbrPoair = {neighbour, weight}
            for(auto nbrPair: adjList[src]) {
                T nbrData = nbrPair.first;

                if(!vls[nbrData]) {
                    dfs_Traversal(nbrData,vls);
                }
            }
        }

};


int main(){
    // Graph_without_weight g;
    // g.addEdge(0,1,1);
    // g.addEdge(1,2,1);
    // g.addEdge(1,3,1);
    // g.addEdge(2,3,1);

    // Graph_with_weight<int> g2;
    // g2.addEdge(0,1,5,1);
    // g2.addEdge(1,2,10,1);
    // g2.addEdge(1,3,20,1);
    // g2.addEdge(2,3,50,1);

    Graph_with_weight<char> g3;
    g3.addEdge('a','b',5,0);
    g3.addEdge('a','c',10,0);
    g3.addEdge('b','c',20,0);
    g3.addEdge('c','d',50,0);
    g3.addEdge('c','e',50,0);
    g3.addEdge('e','f',50,0);
    
    // g3.bfs_Traversal('a');
    unordered_map<char,bool> visited;
    g3.dfs_Traversal('a',visited);


    return 0;
}


// homework :- find number of disconnected components in an  graph using dfs .