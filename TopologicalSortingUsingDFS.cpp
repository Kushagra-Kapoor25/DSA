#include<bits/stdc++.h>
using namespace std;
void DFSRec(vector<int> adj[], int v, stack <int> &s, bool visited[])
{
	visited[v] = true;
	for (int p : adj[v])
		if (!visited[p])
			DFSRec(adj, p, s, visited);
	s.push(v);
}
void DFS(vector<int> adj[], int V)
{
	stack <int> s;
	bool visited[V];
	for (bool x : visited)
		x = false;
	for (int i = 0; i < V; i++)
	{
		if (!visited[i])
			DFSRec(adj, i, s, visited);
	}
	while (!s.empty())
	{
		int u = s.top();
		s.pop();
		cout << u << " ";
	}
}
void addEdge(vector<int>adj[], int s, int d)
{
	adj[s].push_back(d);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 1, 3);
	addEdge(adj, 3, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 2, 4);
	cout << "Topological sorting:";
	DFS(adj, V);
	return 0;
}
// Time Complexity: O(V+E)