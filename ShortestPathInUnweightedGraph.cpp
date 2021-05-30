#include<bits/stdc++.h>
using namespace std;
void shortestPath(vector <int> adj[], int v, int s)
{
	int dist[v];
	for (int i = 0; i < v; i++)
		dist[i] = -1;
	dist[s] = 0;
	queue <int> q;
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	q.push(s);
	visited[s] = true;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int p : adj[u])
		{
			if (!visited[p])
			{
				dist[p] = dist[u] + 1;
				visited[p] = true;
				q.push(p);
			}
		}
	}
	for (int x : dist)
		cout << x << " ";

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
		for (int p : adj[i])
			cout << p << "->";
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
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 3);
	addEdge(adj, 2, 4);
	addEdge(adj, 3, 5);
	addEdge(adj, 4 , 5);
	printGraph(adj, 6);
	shortestPath(adj, 6, 0);
	return 0;
}
