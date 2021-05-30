#include<bits/stdc++.h>
using namespace std;

bool DFSRec(vector<int> adj[], int s, bool visited[], int parent)
{
	visited[s] = true;

	for (int u : adj[s]) {
		if (visited[u] == false) {
			if (DFSRec(adj, u, visited, s) == true)
			{return true;}
		}
		else if (u != parent)
		{return true;}
	}
	return false;
}

bool DFS(vector<int> adj[], int V) {
	bool visited[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	for (int i = 0; i < V; i++) {
		if (visited[i] == false)
			if (DFSRec(adj, i, visited, -1) == true)
				return true;
	}
	return false;
}

void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V = 3;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);


	if (DFS(adj, V))
		cout << "Cycle found";
	else
		cout << "No cycle found";

	return 0;
}
