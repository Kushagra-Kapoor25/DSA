#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {5, 15, 10, 20, 8, 25, 18};
	int k = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < k; i++)
		pq.push(arr[i]);

	for (int i = k; i < n; i++)
	{
		if (arr[i] > pq.top())
		{
			pq.pop();
			pq.push(arr[i]);
		}
	}

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}
// O((n-k)*logk)