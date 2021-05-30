#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	int fact = 1;
	for (int i = 2; i <= n; i++)
		fact *= i;
	return fact;
}
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
		int arr[n];
		int m = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			m = max(m, arr[i]);
		}
		int f = 0;
		for (int x : arr)
		{
			if (x == m)
				f++;
		}
		int ways = 0;
		if (f % 2 == 0)
			ways = ((fact(f) / pow(fact(n - (f / 2)), 2)) * pow(2, n - f));
		int ans = pow(2, n) - ways;
		ans = ans % 1000000007;
		cout << ans << endl;
	}
	return 0;
}