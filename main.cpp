#include <iostream>
#include "bfs.h"
#include "graph.h"

int main(){
	cout<<"Enter the number of vertices(0 - (n-1):\n";
	int n;
	cin>>n;
	cout<<"Enter the number of edges:\n";
	int e;
	cin>>e;
	vector<vector<int> > edges(e, vector<int>(2));
	for(int i=0;i<e;i++){
		cin>>edges[i][0]>>edges[i][1];
	}
	Graph g;


	cout<<"The adj list is :\n";
	unordered_map<int, list<int> > a = g.generateAdjList(edges,n, 0);
    g.printAdjList(a,n);
	cout<<"\nThe BFS traversal is:\n";
	BFS_unordered(edges, n);
}
