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
		long n;
		long d;
		cin >> n >> d;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		long minDays = 0;
		if (d == 1)
			minDays = n;
		else
		{
			int risky = 0;
			for (auto x : a)
				if (x <= 9 || x >= 80)
					risky++;
			int nonrisky = n - risky;
			if (risky % d == 0)
				minDays = minDays + risky / d;
			else
				minDays = minDays + risky / d + 1;
			if (nonrisky % d == 0)
				minDays = minDays + nonrisky / d;
			else
				minDays = minDays + nonrisky / d + 1;
		}
		cout << minDays << endl;
	}
	return 0;
}