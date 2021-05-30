#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	priority_queue<pair<int, int>> pq;
	vector<pair<int, int>> adj[4];

	adj[0].push_back({1, 5});
	adj[1].push_back({2, 3});
	adj[2].push_back({3, 2});
	adj[2].push_back({0, 10});
	adj[3].push_back({1, 20});
	adj[3].push_back({2, 2});

	int dist[4];
	bool finalized[4];

	for (int i = 0; i < 4 ; i++)
	{
		finalized[i] = false;
		dist[i] = INT_MAX;
	}

	dist[0] = 0;
	pq.push({0, 0});

	while (!pq.empty())
	{
		int a = pq.top().first;
		pq.pop();
		if (!finalized[a])
		{
			finalized[a] = true;
			for (auto u : adj[a])
			{
				int b = u.first, w = u.second;
				//Relax Operation
				if (dist[b] > dist[a] + w)
				{
					dist[b] = dist[a] + w;
					pq.push({b, -dist[b]});
				}
			}
		}
	}

	for (int d : dist)
		cout << d << " ";

	return 0;
}