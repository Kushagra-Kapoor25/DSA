#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	priority_queue < int, vector<int>, greater<int> > pq;
	pq.push(10);
	pq.push(15);
	pq.push(5);
	cout << pq.size() << " ";
	while (!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}
	return 0;
}