#include<bits/stdc++.h>
using namespace std;
void topologicalSorting(vector<int>adj[], int indegree[], int V)
{
	queue <int> q;
	for (int i = 0; i < V; i++)
	{
		if (indegree[i] == 0)
			q.push(i);
	}
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (int p : adj[u])
		{
			indegree[p]--;
			if (indegree[p] == 0)
				q.push(p);
		}
	}
}
void addEdge(vector<int>adj[], int s, int d, int indegree[])
{
	adj[s].push_back(d);
	indegree[d]++;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V = 5;
	vector<int> adj[V];
	int indegree[V] = {0};
	addEdge(adj, 0, 2, indegree);
	addEdge(adj, 0, 3, indegree);
	addEdge(adj, 1, 3, indegree);
	addEdge(adj, 1, 4, indegree);
	cout << "Topological sorting:";
	topologicalSorting(adj, indegree, V);
	return 0;
}
// Time complexity: O(V+E)
// Also known as Kahn's Algorithm