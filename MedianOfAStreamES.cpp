#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {25, 7, 10, 15, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	priority_queue<int, vector<int>, greater<int>> g;
	priority_queue<int> s;
	s.push(arr[0]);
	cout << arr[0] << " ";
	for (int i = 1; i < n; i++)
	{
		int x = arr[i];
		if (s.size() > g.size())
		{
			if (s.top() > x)
			{
				g.push(s.top());
				s.pop();
				s.push(x);
			}
			else
				g.push(x);
			cout << (s.top() + g.top()) / 2.0 << " ";
		}
		else
		{
			if (x <= s.top())
				s.push(x);
			else
			{
				g.push(x);
				s.push(g.top());
				g.pop();
			}
			cout << s.top() << " ";
		}
	}
	return 0;
}