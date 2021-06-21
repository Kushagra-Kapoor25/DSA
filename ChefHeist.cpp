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
		long D, d, P, Q;
		cin >> D >> d >> P >> Q;
		long s = 0;
		long n = D / d;
		if (n % 2 == 0)
			s = d * n / 2 * (2 * P + (n - 1) * Q);
		else
			s = d * (n * (P + (n - 1) / 2 * Q));

		s += (D % d) * (P + n * Q);
		cout << s << endl;
	}
	return 0;
}