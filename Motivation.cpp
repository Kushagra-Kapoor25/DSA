#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	struct movies
	{
		int size;
		int rating;
	};
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		struct movies mov[n];
		for (int i = 0; i < n; i++)
			cin >> mov[i].size >> mov[i].rating;
		int maxIMDB = -1;
		for (int i = 0; i < n; i++)
		{
			if (x >= mov[i].size)
				maxIMDB = max(maxIMDB, mov[i].rating);

		}
		cout << maxIMDB << endl;
	}
	return 0;
}