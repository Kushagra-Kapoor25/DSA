#include<bits/stdc++.h>
using namespace std;
bool topologicalSortingForCycleDetection(vector<int>adj[], int indegree[], int V)
{
	queue <int> q;
	for (int i = 0; i < V; i++)
	{
		if (indegree[i] == 0)
			q.push(i);
	}
	int count = 0;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int p : adj[u])
		{
			indegree[p]--;
			if (indegree[p] == 0)
				q.push(p);
		}
		count++;
	}
	return (count != V);
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
	int V = 4;
	vector<int> adj[V];
	int indegree[V] = {0};
	addEdge(adj, 0, 1, indegree);
	addEdge(adj, 1, 2, indegree);
	addEdge(adj, 2, 0, indegree);
	addEdge(adj, 2, 3, indegree);
	cout << "Cycle Detected:" << topologicalSortingForCycleDetection(adj, indegree, V);
	return 0;
}
// Time complexity: O(V+E)
// Also known as Kahn's Algorithm