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
		int f[n];
		for (int i = 0; i < n; i++)
			cin >> f[i];
		int distance_covered = 0;
		int gasoline = f[0];
		for (int i = 1; i < n; i++)
		{
			if (gasoline == 0)
				break;
			gasoline = gasoline - 1 + f[i];
			f[i] = 0;
			distance_covered++;
		}
		cout << distance_covered + gasoline << endl;
	}
	return 0;
}