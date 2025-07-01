#include "graph.h"
using namespace std;
 
unordered_map<int, list<int> > graph::generateAdjList(vector< vector<int> > &edges, int n, bool isDirected){
    unordered_map<int, list<int> > adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
                        
        adj[u].push_back(v);
        if(!isDirected) adj[v].push_back(u);                
    }
return adj;
}

void graph::printAdjList(unordered_map<int, list<int> > &adjList,int n){
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(auto num:adjList[i]){
            cout<<num<<", ";                                
        }  
        cout<<endl;
    }                      
}        


int main(){
    graph* g = new graph;
    
    cout<<"Enter the number of vertices(0-n-1):n = ?\n";
    int n;cin>>n;
    cout<<"Enter the number of edges:\n";
    int e;
    cin>>e;
    vector<vector<int> > edges(e, vector<int>(2));

    for(int i=0;i<e;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
    }

    unordered_map<int, list<int> > a = g->generateAdjList(edges,n, 0);
    g->printAdjList(a,n);
}
