#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long t;
	cin >> t;
	while (t--)
	{
		long n, m;
		cin >> n >> m;
		long ans = 0;
		long maxValue = (long)pow(2, m);
		ans += n * maxValue - 1;
		cout << ans << endl;
	}
	return 0;
}