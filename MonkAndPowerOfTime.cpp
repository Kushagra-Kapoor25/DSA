#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int c = n;
		queue<int> idealOrder;
		queue <int> callingOrder;
		while (c--)
		{
			int input;
			cin >> input;
			callingOrder.push(input);
		}
		while (n--)
		{
			int input;
			cin >> input;
			idealOrder.push(input);
		}
		int process = 0;
		while (!callingOrder.empty())
		{
			if (callingOrder.front() != idealOrder.front())
			{
				callingOrder.push(callingOrder.front());
				callingOrder.pop();
			}
			else
			{
				callingOrder.pop();
				idealOrder.pop();
			}
			process++;

		}
		cout << process << endl;
	}
	return 0;
}