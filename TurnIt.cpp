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
		double u, v, a, s;
		cin >> u >> v >> a >> s;
		if (v == u && v == a && v == s)
			cout << "Yes" << endl;
		else
		{
			double v1;
			v1 = sqrt(u * u - 2 * a * s);
			if (v1 <= v)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}

	}
	return 0;
}