#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int cost[] = {20, 10 , 5 , 30 , 100};
	int sum = 35;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (auto x : cost)
		pq.push(x);
	int res = 0;
	while (pq.top() <= sum)
	{
		sum -= pq.top();
		pq.pop();
		res++;
	}
	cout << res;
	return 0;
}
// O(n)