#include<bits/stdc++.h>
using namespace std;
bool DFSRec(vector <int> adj[], int s, bool visited[], bool recSt[])
{
	visited[s] = true;
	recSt[s] = true;
	for (int u : adj[s])
	{
		if (visited[u] == false && DFSRec(adj, u, visited, recSt))
			return true;
		else if (recSt[u])
			return true;
	}
	recSt[s] = false;
	return false;
}

bool DFS(vector <int> adj[], int v)
{
	bool visited[v];
	bool recSt[v];
	for (int i = 0; i < v; i++)
	{
		visited[i] = false;
		recSt[i] = false;
	}
	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
			if (DFSRec(adj, i, visited, recSt))
				return true;
	}
	return false;
}

void addEdge(vector <int> adj[], int s, int d)
{
	adj[s].push_back(d);
}
void printGraph(vector <int> adj[], int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << i << "->";
		for (int u : adj[i])
			cout << u << "->";
		cout << "NULL" << endl;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int v = 4;
	vector <int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 3);
	addEdge(adj, 1, 3);
	printGraph(adj, v);
	if (DFS(adj, v))
		cout << "Cycle Detected" << endl;
	else
		cout << "No Cycle Detected" << endl;
	return 0;
}