#include<bits/stdc++.h>
using namespace std;
void BFS(vector <int> adj[], int v, int s)
{
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	queue<int> q;
	q.push(s);
	visited[s] = true;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (int p : adj[u])
		{
			if (!visited[p])
			{
				visited[p] = true;
				q.push(p);
			}
		}
	}
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
	int v = 4;
	vector<int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	printGraph(adj, 4);
	cout << "BFS traversal: ";
	BFS(adj, v, 0);
	return 0;
}
// Connected graph is given and source is also given.