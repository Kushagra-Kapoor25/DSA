#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {10, 9, 7, 8, 4, 70, 50, 60};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	priority_queue < int, vector<int>, greater<int> > pq;
	for (int i = 0; i <= k; i++)
		pq.push(arr[i]);
	int index = 0;
	for (int i = k + 1; i < n; i++)
	{
		arr[index++] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}
	while (!pq.empty())
	{
		arr[index++] = pq.top();
		pq.pop();
	}
	for (auto x : arr)
		cout << x << " ";
	return 0;
}