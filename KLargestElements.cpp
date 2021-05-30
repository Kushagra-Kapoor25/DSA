#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {5, 15, 10, 20, 8};
	int k = 2;
	priority_queue<int> pq;
	for (auto x : arr)
		pq.push(x);
	while (k--)
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}
// O(n) + O(klogn )