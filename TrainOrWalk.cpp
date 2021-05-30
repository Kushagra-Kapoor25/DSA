#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
	// your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, a, b, c, d, p, q, y;
		cin >> n >> a >> b >> c >> d >> p >> q >> y;
		ll ar[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> ar[i];
		}

		ll temp1, temp2 = INT_MAX;
		temp1 = abs(ar[b] - ar[a]) * p;

		if (abs(ar[c] - ar[a])*p <= y)
			temp2 = y + abs(ar[d] - ar[c]) * q + abs(ar[b] - ar[d]) * p;

		// cout<<temp1<<endl<<temp2<<endl;
		cout << min(temp2, temp1) << endl;

	}
	return 0;
}
