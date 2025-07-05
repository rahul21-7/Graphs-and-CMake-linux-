#include "bfs.h"
using namespace std;


//undirected graph
void BFS_unordered(vector<vector<int> > edges, int n){
	//make adj list
	vector<vector<int> > ans;
	unordered_map<int, list<int> > adj;
	for(auto edge:edges){
		int u = edge[0];
		int v = edge[1];

		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	

	//bfs
	unordered_map<int, bool> visited;
	//for going through disconnected part
	queue<int> q;
	for(int i=1;i<n;++i){
		if(visited[i]) continue;
		q.push(i);
		while(!q.empty()){
			int front = q.front();
			q.pop();
			visited[front] = true;
			cout<<front<<" ";

			for(auto neighbor:adj[front]){
				if(!visited[neighbor]){
					q.push(neighbor);
					visited[neighbor] = true;
				}
			}
		}
		cout<<endl;
	}
}

