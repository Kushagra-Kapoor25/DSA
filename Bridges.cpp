#include<bits/stdc++.h>
using namespace std;
void Bridge(int u, vector<int> adj[], bool visited[], int disc[], int low[], int parent[])
{
	static int time = 0;
	visited[u] = true;
	disc[u] = low[u] = ++time;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			parent[v] = u;
			Bridge(v, adj, visited, disc, low, parent);
			low[u] = min(low[u], low[v]);
			if (low[v] > disc[u])
				cout << u << "->" << v << endl;
		}

		else if (v != parent[u])
			low[u] = min(low[u], disc[v]);
	}
}
void DFS(vector <int> adj[], int V)
{
	bool visited[V];
	int disc[V];
	int low[V];
	int parent[V];
	for (int i = 0; i < V; i++)
	{
		visited[i] = false;
		disc[i] = -1;
		low[i] = -1;
		parent[i] = -1;
	}
	for (int i = 0; i < V; i++)
	{
		if (!visited[i])
			Bridge(i, adj, visited, disc, low, parent);
	}

}
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V = 5;
	vector <int> adj[V];
	addEdge(adj, 1, 0);
	addEdge(adj, 0, 2);
	addEdge(adj, 2, 1);
	addEdge(adj, 0, 3);
	addEdge(adj, 3, 4);
	cout << "Bridges:" << endl ;
	DFS(adj, V);
	return 0;
}