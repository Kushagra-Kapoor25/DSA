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
		int c[n];
		for (int i = 0; i < n  ; i++)
			cin >> c[i];
		sort(c, c + n, greater<int>());
		int b1 = 0, b2 = 0;
		for (int i = 0; i < n ; i++)
		{
			if (b1 < b2)
				b1 += c[i];
			else
				b2 += c[i];
		}
		cout << max(b1, b2) << endl;
	}
	return 0;
}