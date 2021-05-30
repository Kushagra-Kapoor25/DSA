#include<bits/stdc++.h>
using namespace std;
void DFSRec(vector<int>adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";
	for (int p : adj[s])
	{
		if (!visited[p])
			DFSRec(adj, p, visited);
	}
}
void DFS(vector<int>adj[], int v, int s)
{
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	DFSRec(adj, s, visited);
}


void addEdge(vector <int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector <int> adj[], int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << i << "->";
		for (int x : adj[i])
			cout << x << "->";
		cout << "null" << endl;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int v = 6;
	vector <int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 4, 5);
	cout << "DFS Traversal:";
	DFS(adj, v, 0);
	return 0;
}