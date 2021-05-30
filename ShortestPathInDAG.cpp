#include<bits/stdc++.h>
using namespace std;
struct node
{
	int d;
	int w;

	Node(int dest, int weight)
	{
		d = dest;
		w = weight;
	}
};
void addEdge(vector<node> adj[], int s, int d, int w)
{
	adj[s].push_back(new Node(d, w));
}

void printGraph(vector<node> adj[], int V)
{
	for (int i = 0; i < V; i++)
	{
		for (node x : adj[i])
			cout << x.d << "(" << x.w << ")" << "-->";
		cout << endl;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V = 3;
	vector<node> adj[V];
	addEdge(adj, 0, 1, 2);
	addEdge(adj, 0, 2, 3);
	addEdge(adj, 1, 2, 4);
	printGraph(adj, V);
	return 0;
}