#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<tuple<int, int, int>> edges;
	edges.push_back({2, 1, 3});
	edges.push_back({2, 3, 2});
	edges.push_back({2, 4, 1});
	edges.push_back({3, 4, -7});
	edges.push_back({1, 3, 5});

	int dist[5];
	for (int i = 1; i <= 4; i++)
		dist[i] = INT_MAX;

	dist[2] = 0;

	for (int i = 1; i <= 3; i++)
	{
		for (auto e : edges)
		{
			int a, b, w;
			tie(a, b, w) = e;
			// Relax Operation
			if (dist[b] > dist[a] + w)
				dist[b] = dist[a] + w;
		}
	}
	for (int i = 1; i <= 4; i++)
		cout << dist[i] << " ";
	cout << endl;

	for (auto e : edges)
	{
		int a, b, w;
		tie(a, b, w) = e;
		if (dist[b] > dist[a] + w)
		{
			cout << "Negative Weight Cycle Found.";
			break;
		}
	}
	return 0;
}