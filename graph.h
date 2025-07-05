#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <unordered_map>
#include <set>
#include <stack>
using namespace std;

class Graph{
public:
	unordered_map<int, list<int> > generateAdjList(vector<vector<int> > &edges, 
    int n, bool isDirected);

	void printAdjList(unordered_map<int, list<int> > &adjList, int n);
};
